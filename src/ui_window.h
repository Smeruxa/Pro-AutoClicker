/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *change_state;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QCheckBox *lbutton_state;
    QCheckBox *rbutton_state;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *state_own_wait;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QScrollBar *rbutton_wait_slider;
    QLabel *label;
    QLabel *lbutton_wait_label;
    QScrollBar *lbutton_wait_slider;
    QLabel *label_2;
    QLabel *rbutton_wait_label;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *own_click;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QSpinBox *lbutton_click_counter;
    QSpinBox *rbutton_click_counter;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QString::fromUtf8("window"));
        window->resize(253, 448);
        window->setStyleSheet(QString::fromUtf8("background-color: #5b5b5b;"));
        centralwidget = new QWidget(window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        change_state = new QCheckBox(centralwidget);
        change_state->setObjectName(QString::fromUtf8("change_state"));
        change_state->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: white;\n"
"	text-align: 10px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"    width: 15px; \n"
"    height: 15px; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #008080;\n"
"}"));

        verticalLayout_2->addWidget(change_state, 0, Qt::AlignHCenter);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 100));
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setStyleSheet(QString::fromUtf8("background-color: #484848;\n"
"border: 2px solid #3e3e3e;\n"
"border-radius: 5px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("color: white;"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer);

        lbutton_state = new QCheckBox(groupBox);
        lbutton_state->setObjectName(QString::fromUtf8("lbutton_state"));
        QFont font;
        font.setPointSize(8);
        lbutton_state->setFont(font);
        lbutton_state->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	border: none;\n"
"    color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"    width: 15px; \n"
"    height: 15px; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #008080;\n"
"}"));

        verticalLayout_4->addWidget(lbutton_state);

        rbutton_state = new QCheckBox(groupBox);
        rbutton_state->setObjectName(QString::fromUtf8("rbutton_state"));
        rbutton_state->setFont(font);
        rbutton_state->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	border: none;\n"
"    color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"    width: 15px; \n"
"    height: 15px; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #008080;\n"
"}"));

        verticalLayout_4->addWidget(rbutton_state);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 165));
        frame_2->setMaximumSize(QSize(16777215, 165));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #484848;\n"
"border: 2px solid #3e3e3e;\n"
"border-radius: 5px;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        state_own_wait = new QCheckBox(frame_2);
        state_own_wait->setObjectName(QString::fromUtf8("state_own_wait"));
        state_own_wait->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	border: none;\n"
"    color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"    width: 15px; \n"
"    height: 15px; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #008080;\n"
"}"));

        verticalLayout_5->addWidget(state_own_wait, 0, Qt::AlignHCenter);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: white;"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rbutton_wait_slider = new QScrollBar(groupBox_2);
        rbutton_wait_slider->setObjectName(QString::fromUtf8("rbutton_wait_slider"));
        rbutton_wait_slider->setMinimumSize(QSize(120, 0));
        rbutton_wait_slider->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    border: 1px solid #999999;\n"
"    background: #f0f0f0;\n"
"    height: 10px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #666666;\n"
"    border: 1px solid #666666;\n"
"    min-width: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: 1px solid #999999;\n"
"    background: #f0f0f0;\n"
"    width: 0px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 1px solid #999999;\n"
"    background: #f0f0f0;\n"
"    width: 0px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal,\n"
"QScrollBar::sub-page:horizontal {\n"
"    background: #4b4b4b;\n"
"}\n"
"\n"
"QScrollBar::left-arrow:horizontal,\n"
"QScrollBar::right-arrow:horizontal {\n"
"    border: 1px solid #999999;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: #f0f0f0;\n"
"}\n"
""));
        rbutton_wait_slider->setMinimum(5);
        rbutton_wait_slider->setMaximum(100);
        rbutton_wait_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rbutton_wait_slider, 4, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border:none;"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lbutton_wait_label = new QLabel(groupBox_2);
        lbutton_wait_label->setObjectName(QString::fromUtf8("lbutton_wait_label"));

        gridLayout_2->addWidget(lbutton_wait_label, 2, 1, 1, 1);

        lbutton_wait_slider = new QScrollBar(groupBox_2);
        lbutton_wait_slider->setObjectName(QString::fromUtf8("lbutton_wait_slider"));
        lbutton_wait_slider->setMinimumSize(QSize(120, 0));
        lbutton_wait_slider->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    border: 1px solid #999999;\n"
"    background: #f0f0f0;\n"
"    height: 10px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: #666666;\n"
"    border: 1px solid #666666;\n"
"    min-width: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: 1px solid #999999;\n"
"    background: #f0f0f0;\n"
"    width: 0px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 1px solid #999999;\n"
"    background: #f0f0f0;\n"
"    width: 0px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal,\n"
"QScrollBar::sub-page:horizontal {\n"
"    background: #4b4b4b;\n"
"}\n"
"\n"
"QScrollBar::left-arrow:horizontal,\n"
"QScrollBar::right-arrow:horizontal {\n"
"    border: 1px solid #999999;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: #f0f0f0;\n"
"}\n"
""));
        lbutton_wait_slider->setMinimum(5);
        lbutton_wait_slider->setMaximum(100);
        lbutton_wait_slider->setSliderPosition(10);
        lbutton_wait_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(lbutton_wait_slider, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        rbutton_wait_label = new QLabel(groupBox_2);
        rbutton_wait_label->setObjectName(QString::fromUtf8("rbutton_wait_label"));

        gridLayout_2->addWidget(rbutton_wait_label, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 130));
        frame_3->setMaximumSize(QSize(16777215, 130));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #484848;\n"
"border: 2px solid #3e3e3e;\n"
"border-radius: 5px;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        own_click = new QCheckBox(frame_3);
        own_click->setObjectName(QString::fromUtf8("own_click"));
        own_click->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	border: none;\n"
"    color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"    width: 15px; \n"
"    height: 15px; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #008080;\n"
"}"));

        verticalLayout_7->addWidget(own_click, 0, Qt::AlignHCenter);

        groupBox_3 = new QGroupBox(frame_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: white;"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lbutton_click_counter = new QSpinBox(groupBox_3);
        lbutton_click_counter->setObjectName(QString::fromUtf8("lbutton_click_counter"));
        lbutton_click_counter->setMinimum(1);
        lbutton_click_counter->setMaximum(30);

        gridLayout->addWidget(lbutton_click_counter, 1, 1, 1, 1);

        rbutton_click_counter = new QSpinBox(groupBox_3);
        rbutton_click_counter->setObjectName(QString::fromUtf8("rbutton_click_counter"));
        rbutton_click_counter->setMinimum(1);
        rbutton_click_counter->setMaximum(30);

        gridLayout->addWidget(rbutton_click_counter, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_3);


        verticalLayout_2->addWidget(frame_3);

        window->setCentralWidget(centralwidget);

        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QCoreApplication::translate("window", "window", nullptr));
        change_state->setText(QCoreApplication::translate("window", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214/\320\262\321\213\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\260\320\262\321\202\320\276-\320\272\320\273\320\270\320\272\320\265\321\200", nullptr));
        groupBox->setTitle(QCoreApplication::translate("window", "\320\235\320\260\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\272\320\273\320\260\320\262\320\270\321\210", nullptr));
        lbutton_state->setText(QCoreApplication::translate("window", "\320\222\320\272\320\273/\320\262\321\213\320\272\320\273 \320\273\320\265\320\262\321\203\321\216 \320\272\320\275\320\276\320\277\320\272\321\203 \320\274\321\213\321\210\320\270", nullptr));
        rbutton_state->setText(QCoreApplication::translate("window", "\320\222\320\272\320\273/\320\262\321\213\320\272\320\273 \320\277\321\200\320\260\320\262\321\203\321\216 \320\272\320\275\320\276\320\277\320\272\321\203 \320\274\321\213\321\210\320\270", nullptr));
#if QT_CONFIG(tooltip)
        state_own_wait->setToolTip(QCoreApplication::translate("window", "<html><head/><body style=\"border:none;\"><p><span style=\" color:#ffffff; border:none;\">\320\243\321\201\321\202\320\260\320\275\320\260\320\262\320\273\320\270\320\262\320\260\320\265\321\202 \320\270\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\321\203\321\216 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\321\203 \320\274\320\265\320\266\320\264\321\203 \320\275\320\260\320\266\320\260\321\202\320\270\321\217\320\274\320\270, \320\272\320\276\321\202\320\276\321\200\321\203\321\216 \321\203\320\272\320\260\320\267\321\213\320\262\320\260\320\265\321\202\320\265 \320\262\321\213 \321\201\320\260\320\274\320\270</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        state_own_wait->setText(QCoreApplication::translate("window", "\320\222\320\272\320\273/\320\262\321\213\320\272\320\273 \321\201\320\262\320\276\321\216 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\321\203 (?)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("window", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\267\320\260\320\264\320\265\321\200\320\266\320\272\321\203", nullptr));
        label->setText(QCoreApplication::translate("window", "\320\227\320\260\320\264\320\265\321\200\320\266\320\272\320\260 \320\233\320\232\320\234", nullptr));
        lbutton_wait_label->setText(QCoreApplication::translate("window", "\320\274\321\201", nullptr));
        label_2->setText(QCoreApplication::translate("window", "\320\227\320\260\320\264\320\265\321\200\320\266\320\272\320\260 \320\237\320\232\320\234", nullptr));
        rbutton_wait_label->setText(QCoreApplication::translate("window", "\320\274\321\201", nullptr));
#if QT_CONFIG(tooltip)
        own_click->setToolTip(QCoreApplication::translate("window", "<html><head/><body><p><span style=\" color:#ffffff;\">\320\243\320\272\320\260\320\267\321\213\320\262\320\260\320\265\321\202, \321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\272\320\273\320\270\320\272\320\276\320\262 \320\261\321\203\320\264\320\265\321\202 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\267\320\260 \320\276\320\264\320\275\320\276 \320\275\320\260\320\266\320\260\321\202\320\270\320\265 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \320\274\321\213\321\210\320\270</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        own_click->setText(QCoreApplication::translate("window", "\320\222\320\272\320\273/\320\262\321\213\320\272\320\273 \321\201\320\262\320\276\320\271 \320\232\320\237\320\241 \320\267\320\260 \320\272\320\273\320\270\320\272 (?)", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("window", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\266\320\265\320\273\320\260\320\265\320\274\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("window", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\272\320\275\320\276\320\277\320\272\320\260 \320\274\321\213\321\210\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("window", "\320\233\320\265\320\262\320\260\321\217 \320\272\320\275\320\276\320\277\320\272\320\260 \320\274\321\213\321\210\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
