#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QThread>
#include <Windows.h>
#include <QScrollBar>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class window; }
QT_END_NAMESPACE

class JsonConfig
{
public:
    JsonConfig(const QString &filePath, const QHash<QString, QVariant> &defaultTable)
        : filePath(filePath), defaultTable(defaultTable) {}

    bool loadConfig()
    {
        QFile file(filePath);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            configObject = defaultTableToJson(defaultTable);
            saveConfig();
            return false;
        }

        QByteArray jsonData = file.readAll();
        file.close();

        QJsonParseError error;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &error);
        if (jsonDoc.isNull())
        {
            configObject = defaultTableToJson(defaultTable);
            return false;
        }

        configObject = jsonDoc.object();
        return true;
    }

    bool saveConfig()
    {
        QFile file(filePath);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            qDebug() << "Could not open the file for writing:" << filePath;
            return false;
        }

        QJsonDocument jsonDoc(configObject);
        file.write(jsonDoc.toJson());
        file.close();

        return true;
    }

    QVariant getValue(const QString &key) const
    {
        return configObject.value(key).toVariant();
    }

    void setValue(const QString &key, const QVariant &value)
    {
        configObject.insert(key, QJsonValue::fromVariant(value));
        this->saveConfig();
    }

private:
    QString filePath;
    QHash<QString, QVariant> defaultTable;
    QJsonObject configObject;

    QJsonObject defaultTableToJson(const QHash<QString, QVariant> &table) const
    {
        QJsonObject jsonObject;
        for (auto it = table.begin(); it != table.end(); ++it)
        {
            jsonObject.insert(it.key(), QJsonValue::fromVariant(it.value()));
        }
        return jsonObject;
    }

    QHash<QString, QVariant> jsonToTable(const QJsonObject &jsonObject) const
    {
        QHash<QString, QVariant> table;
        for (auto it = jsonObject.begin(); it != jsonObject.end(); ++it)
        {
            table.insert(it.key(), it.value().toVariant());
        }
        return table;
    }
};

class ClickerThread : public QThread
{
    Q_OBJECT

public slots:
    void set_lbutton_wait(int value);
    void set_rbutton_wait(int value);
    void set_lbutton_clicks(int value);
    void set_rbutton_clicks(int value);

    void set_lbutton_state(int state);
    void set_rbutton_state(int state);
    void set_own_click(int state);
    void set_own_state(int state);
    void set_state(int state);

    void left_click() {
        mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, 0, 0);
    }

    void right_click() {
        mouse_event(MOUSEEVENTF_RIGHTDOWN, NULL, NULL, 0, 0);
        mouse_event(MOUSEEVENTF_RIGHTUP, NULL, NULL, 0, 0);
    }

protected:
    void run() override
    {

        bool lbutton_was_pressed = false;
        bool rbutton_was_pressed = false;

        while (true) {

            if (state) {
                if ((GetKeyState(VK_XBUTTON2) & 0x8000) && lbutton_state) {
                    left_click();
                    QThread::msleep(own_state ? lbutton_wait : 30);
                }
                if ((GetKeyState(VK_XBUTTON1) & 0x8000) && rbutton_state) {
                    right_click();
                    QThread::msleep(own_state ? rbutton_wait : 20);
                }

                if (own_click) {
                    bool is_lbutton_pressed = GetKeyState(VK_LBUTTON) & 0x8000;
                    bool is_rbutton_pressed = GetKeyState(VK_RBUTTON) & 0x8000;
                    if (lbutton_was_pressed && !is_lbutton_pressed && lbutton_state)
                        for (int i = 0; i < lbutton_click; i++)
                            left_click();


                    if (rbutton_was_pressed && !is_rbutton_pressed && rbutton_state)
                        for (int i = 0; i < rbutton_click; i++)
                            right_click();


                    lbutton_was_pressed = is_lbutton_pressed;
                    rbutton_was_pressed = is_rbutton_pressed;
                }
            }

            QThread::msleep(1);
        }
    }

private:
    int lbutton_wait = 5;
    int rbutton_wait = 5;

    int lbutton_click = 1;
    int rbutton_click = 1;

    bool lbutton_state = false;
    bool rbutton_state = false;

    bool own_state = false;
    bool own_click = false;
    bool state = false;
};

class window : public QMainWindow
{
    Q_OBJECT

public:

    window(QWidget *parent = nullptr);
    ~window();

private slots:

    void on_lbutton_wait_slider_valueChanged(int value);

    void on_rbutton_wait_slider_valueChanged(int value);

    void on_change_state_stateChanged(int arg1);

    void on_lbutton_state_stateChanged(int arg1);

    void on_rbutton_state_stateChanged(int arg1);

    void on_state_own_wait_stateChanged(int arg1);

    void on_own_click_stateChanged(int arg1);

    void on_lbutton_click_counter_valueChanged(int arg1);

    void on_rbutton_click_counter_valueChanged(int arg1);

private:
    Ui::window *ui;
    ClickerThread *clickerThread;
    JsonConfig jsonConfig;
    QHash<QString, QVariant> defaultTable;
};
#endif // WINDOW_H
