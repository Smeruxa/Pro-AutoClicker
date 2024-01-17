#include "window.h"
#include "ui_window.h"


void ClickerThread::set_lbutton_wait(int value)
{
    this->lbutton_wait = value;
}

void ClickerThread::set_rbutton_wait(int value)
{
    this->rbutton_wait = value;
}

void ClickerThread::set_state(int state)
{
    this->state = (bool)(state);
}

void ClickerThread::set_lbutton_state(int state)
{
    this->lbutton_state = (bool)(state);
}

void ClickerThread::set_rbutton_state(int state)
{
    this->rbutton_state = (bool)(state);
}

void ClickerThread::set_own_state(int state)
{
    this->own_state = (bool)(state);
}

void ClickerThread::set_own_click(int state)
{
    this->own_click = (bool)(state);
}

void ClickerThread::set_lbutton_clicks(int value)
{
    this->lbutton_click = value;
}
void ClickerThread::set_rbutton_clicks(int value)
{
    this->rbutton_click = value;
}

window::window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::window)
    , jsonConfig("config.json", defaultTable)
{
    ui->setupUi(this);

    defaultTable.insert("all_state", false);
    defaultTable.insert("lbutton_state", false);
    defaultTable.insert("rbutton_state", false);
    defaultTable.insert("own_wait", false);
    defaultTable.insert("wait_lbutton", 30);
    defaultTable.insert("wait_rbutton", 20);
    defaultTable.insert("own_click", false);
    defaultTable.insert("left_count_clicks", 1);
    defaultTable.insert("right_count_clicks", 1);

    jsonConfig = JsonConfig("config.json", defaultTable);

    jsonConfig.loadConfig();

    clickerThread = new ClickerThread;
    clickerThread->start();

    {
        ui->change_state->setChecked(jsonConfig.getValue("all_state").toBool());
        ui->lbutton_state->setChecked(jsonConfig.getValue("lbutton_state").toBool());
        ui->rbutton_state->setChecked(jsonConfig.getValue("rbutton_state").toBool());
        ui->state_own_wait->setChecked(jsonConfig.getValue("own_wait").toBool());
        ui->own_click->setChecked(jsonConfig.getValue("own_click").toBool());

        ui->lbutton_wait_slider->setValue(jsonConfig.getValue("wait_lbutton").toInt());
        ui->lbutton_wait_label->setText(QString::number(ui->lbutton_wait_slider->value()) + " мс");
        ui->rbutton_wait_slider->setValue(jsonConfig.getValue("wait_rbutton").toInt());
        ui->rbutton_wait_label->setText(QString::number(ui->rbutton_wait_slider->value()) + " мс");

        ui->lbutton_click_counter->setValue(jsonConfig.getValue("left_count_clicks").toInt());
        ui->rbutton_click_counter->setValue(jsonConfig.getValue("right_count_clicks").toInt());
    }

    {
        clickerThread->set_lbutton_clicks(jsonConfig.getValue("left_count_clicks").toInt());
        clickerThread->set_lbutton_wait(jsonConfig.getValue("wait_lbutton").toInt());
        clickerThread->set_lbutton_state(jsonConfig.getValue("lbutton_state").toInt());

        clickerThread->set_rbutton_clicks(jsonConfig.getValue("right_count_clicks").toInt());
        clickerThread->set_rbutton_wait(jsonConfig.getValue("wait_rbutton").toInt());
        clickerThread->set_rbutton_state(jsonConfig.getValue("rbutton_state").toInt());

        clickerThread->set_state(jsonConfig.getValue("all_state").toBool());
        clickerThread->set_own_state(jsonConfig.getValue("own_wait").toBool());
        clickerThread->set_own_click(jsonConfig.getValue("own_click").toBool());
    }
}

window::~window()
{
    if (clickerThread)
        clickerThread->terminate();
    delete ui;
}

void window::on_lbutton_wait_slider_valueChanged(int value)
{
    clickerThread->set_lbutton_wait(value);
    ui->lbutton_wait_label->setText(QString::number(value) + " мс");
    jsonConfig.setValue("wait_lbutton", value);
}


void window::on_rbutton_wait_slider_valueChanged(int value)
{
    clickerThread->set_rbutton_wait(value);
    ui->rbutton_wait_label->setText(QString::number(value) + " мс");
    jsonConfig.setValue("wait_rbutton", value);
}

void window::on_change_state_stateChanged(int arg1)
{
    clickerThread->set_state(arg1);
    jsonConfig.setValue("all_state", (bool)(arg1));
}


void window::on_lbutton_state_stateChanged(int arg1)
{
    clickerThread->set_lbutton_state(arg1);
    jsonConfig.setValue("lbutton_state", (bool)(arg1));
}


void window::on_rbutton_state_stateChanged(int arg1)
{
    clickerThread->set_rbutton_state(arg1);
    jsonConfig.setValue("rbutton_state", (bool)(arg1));
}

void window::on_state_own_wait_stateChanged(int arg1)
{
    clickerThread->set_own_state(arg1);
    jsonConfig.setValue("own_wait", (bool)(arg1));
}

void window::on_own_click_stateChanged(int arg1)
{
    clickerThread->set_own_click(arg1);
    jsonConfig.setValue("own_click", (bool)(arg1));
}


void window::on_lbutton_click_counter_valueChanged(int arg1)
{
    clickerThread->set_lbutton_clicks(arg1);
    jsonConfig.setValue("left_count_clicks", arg1);
}


void window::on_rbutton_click_counter_valueChanged(int arg1)
{
    clickerThread->set_rbutton_clicks(arg1);
    jsonConfig.setValue("right_count_clicks", arg1);
}

