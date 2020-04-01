/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_x;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_x_wf_sin;
    QPushButton *btn_x_wf_saw;
    QPushButton *btn_x_wf_trg;
    QPushButton *btn_x_wf_sq;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *btn_x_vdc_dn;
    QPushButton *btn_x_phase_dn;
    QPushButton *btn_x_freq_up;
    QSlider *slider_x_phase;
    QLabel *label_5;
    QLabel *label_3;
    QSlider *slider_x_vdc;
    QLabel *label_7;
    QPushButton *btn_x_vdc_up;
    QPushButton *btn_x_freq_dn;
    QSlider *slider_x_vac;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_x_vac_up;
    QPushButton *btn_x_vac_dn;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *btn_x_phase_up;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit_x_freq;
    QTextEdit *textEdit_x_vac;
    QTextEdit *textEdit_x_vdc;
    QTextEdit *textEdit_x_phase;
    QSlider *slider_x_freq;
    QWidget *tab_y;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_y_wf_sin;
    QPushButton *btn_y_wf_saw;
    QPushButton *btn_y_wf_trg;
    QPushButton *btn_y_wf_sq;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QPushButton *btn_y_vdc_dn;
    QPushButton *btn_y_phase_dn;
    QPushButton *btn_y_freq_up;
    QSlider *slider_y_phase;
    QLabel *label_10;
    QLabel *label_11;
    QSlider *slider_y_vdc;
    QLabel *label_12;
    QPushButton *btn_y_vdc_up;
    QSlider *slider_y_vac;
    QPushButton *btn_y_freq_dn;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_9;
    QPushButton *btn_y_vac_up;
    QPushButton *btn_y_vac_dn;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *btn_y_phase_up;
    QSlider *slider_y_freq;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit_y_freq;
    QTextEdit *textEdit_y_vac;
    QTextEdit *textEdit_y_vdc;
    QTextEdit *textEdit_y_phase;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *state;
    QPushButton *Run;
    QSpacerItem *verticalSpacer;
    QPushButton *Stop;
    QSpacerItem *verticalSpacer_6;
    QPushButton *Exit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *enable_x;
    QCheckBox *enable_y;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(20, 20, 650, 440));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_x = new QWidget();
        tab_x->setObjectName(QStringLiteral("tab_x"));
        layoutWidget = new QWidget(tab_x);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 611, 371));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_x_wf_sin = new QPushButton(layoutWidget);
        btn_x_wf_sin->setObjectName(QStringLiteral("btn_x_wf_sin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_x_wf_sin->sizePolicy().hasHeightForWidth());
        btn_x_wf_sin->setSizePolicy(sizePolicy);
        btn_x_wf_sin->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        btn_x_wf_sin->setFont(font1);
        btn_x_wf_sin->setCheckable(true);
        btn_x_wf_sin->setChecked(true);
        btn_x_wf_sin->setAutoExclusive(false);

        horizontalLayout->addWidget(btn_x_wf_sin);

        btn_x_wf_saw = new QPushButton(layoutWidget);
        btn_x_wf_saw->setObjectName(QStringLiteral("btn_x_wf_saw"));
        sizePolicy.setHeightForWidth(btn_x_wf_saw->sizePolicy().hasHeightForWidth());
        btn_x_wf_saw->setSizePolicy(sizePolicy);
        btn_x_wf_saw->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(18);
        btn_x_wf_saw->setFont(font2);
        btn_x_wf_saw->setCheckable(true);
        btn_x_wf_saw->setAutoExclusive(false);

        horizontalLayout->addWidget(btn_x_wf_saw);

        btn_x_wf_trg = new QPushButton(layoutWidget);
        btn_x_wf_trg->setObjectName(QStringLiteral("btn_x_wf_trg"));
        sizePolicy.setHeightForWidth(btn_x_wf_trg->sizePolicy().hasHeightForWidth());
        btn_x_wf_trg->setSizePolicy(sizePolicy);
        btn_x_wf_trg->setMinimumSize(QSize(0, 50));
        btn_x_wf_trg->setFont(font2);
        btn_x_wf_trg->setCheckable(true);
        btn_x_wf_trg->setAutoExclusive(false);

        horizontalLayout->addWidget(btn_x_wf_trg);

        btn_x_wf_sq = new QPushButton(layoutWidget);
        btn_x_wf_sq->setObjectName(QStringLiteral("btn_x_wf_sq"));
        sizePolicy.setHeightForWidth(btn_x_wf_sq->sizePolicy().hasHeightForWidth());
        btn_x_wf_sq->setSizePolicy(sizePolicy);
        btn_x_wf_sq->setMinimumSize(QSize(0, 50));
        btn_x_wf_sq->setFont(font2);
        btn_x_wf_sq->setCheckable(true);
        btn_x_wf_sq->setAutoExclusive(false);

        horizontalLayout->addWidget(btn_x_wf_sq);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(30, 50));
        QFont font3;
        font3.setPointSize(12);
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 5, 6, 1, 1);

        btn_x_vdc_dn = new QPushButton(layoutWidget);
        btn_x_vdc_dn->setObjectName(QStringLiteral("btn_x_vdc_dn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_x_vdc_dn->sizePolicy().hasHeightForWidth());
        btn_x_vdc_dn->setSizePolicy(sizePolicy2);
        btn_x_vdc_dn->setMinimumSize(QSize(0, 50));
        btn_x_vdc_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_vdc_dn, 5, 1, 1, 1);

        btn_x_phase_dn = new QPushButton(layoutWidget);
        btn_x_phase_dn->setObjectName(QStringLiteral("btn_x_phase_dn"));
        sizePolicy2.setHeightForWidth(btn_x_phase_dn->sizePolicy().hasHeightForWidth());
        btn_x_phase_dn->setSizePolicy(sizePolicy2);
        btn_x_phase_dn->setMinimumSize(QSize(0, 50));
        btn_x_phase_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_phase_dn, 7, 1, 1, 1);

        btn_x_freq_up = new QPushButton(layoutWidget);
        btn_x_freq_up->setObjectName(QStringLiteral("btn_x_freq_up"));
        sizePolicy2.setHeightForWidth(btn_x_freq_up->sizePolicy().hasHeightForWidth());
        btn_x_freq_up->setSizePolicy(sizePolicy2);
        btn_x_freq_up->setMinimumSize(QSize(0, 50));
        btn_x_freq_up->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_freq_up, 1, 3, 1, 1);

        slider_x_phase = new QSlider(layoutWidget);
        slider_x_phase->setObjectName(QStringLiteral("slider_x_phase"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(slider_x_phase->sizePolicy().hasHeightForWidth());
        slider_x_phase->setSizePolicy(sizePolicy3);
        slider_x_phase->setMinimumSize(QSize(0, 50));
        slider_x_phase->setMaximumSize(QSize(600, 50));
        slider_x_phase->setCursor(QCursor(Qt::OpenHandCursor));
        slider_x_phase->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_x_phase->setMaximum(360);
        slider_x_phase->setSingleStep(1);
        slider_x_phase->setValue(0);
        slider_x_phase->setOrientation(Qt::Horizontal);
        slider_x_phase->setTickPosition(QSlider::TicksBelow);
        slider_x_phase->setTickInterval(90);

        gridLayout->addWidget(slider_x_phase, 7, 2, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMaximumSize(QSize(30, 50));
        label_3->setFont(font3);

        gridLayout->addWidget(label_3, 3, 6, 1, 1);

        slider_x_vdc = new QSlider(layoutWidget);
        slider_x_vdc->setObjectName(QStringLiteral("slider_x_vdc"));
        sizePolicy3.setHeightForWidth(slider_x_vdc->sizePolicy().hasHeightForWidth());
        slider_x_vdc->setSizePolicy(sizePolicy3);
        slider_x_vdc->setMinimumSize(QSize(0, 50));
        slider_x_vdc->setMaximumSize(QSize(600, 50));
        slider_x_vdc->setCursor(QCursor(Qt::OpenHandCursor));
        slider_x_vdc->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_x_vdc->setMaximum(160);
        slider_x_vdc->setValue(0);
        slider_x_vdc->setOrientation(Qt::Horizontal);
        slider_x_vdc->setTickPosition(QSlider::TicksBelow);
        slider_x_vdc->setTickInterval(40);

        gridLayout->addWidget(slider_x_vdc, 5, 2, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        btn_x_vdc_up = new QPushButton(layoutWidget);
        btn_x_vdc_up->setObjectName(QStringLiteral("btn_x_vdc_up"));
        sizePolicy2.setHeightForWidth(btn_x_vdc_up->sizePolicy().hasHeightForWidth());
        btn_x_vdc_up->setSizePolicy(sizePolicy2);
        btn_x_vdc_up->setMinimumSize(QSize(0, 50));
        btn_x_vdc_up->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_vdc_up, 5, 3, 1, 1);

        btn_x_freq_dn = new QPushButton(layoutWidget);
        btn_x_freq_dn->setObjectName(QStringLiteral("btn_x_freq_dn"));
        sizePolicy2.setHeightForWidth(btn_x_freq_dn->sizePolicy().hasHeightForWidth());
        btn_x_freq_dn->setSizePolicy(sizePolicy2);
        btn_x_freq_dn->setMinimumSize(QSize(0, 50));
        btn_x_freq_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_freq_dn, 1, 1, 1, 1);

        slider_x_vac = new QSlider(layoutWidget);
        slider_x_vac->setObjectName(QStringLiteral("slider_x_vac"));
        sizePolicy3.setHeightForWidth(slider_x_vac->sizePolicy().hasHeightForWidth());
        slider_x_vac->setSizePolicy(sizePolicy3);
        slider_x_vac->setMinimumSize(QSize(0, 50));
        slider_x_vac->setMaximumSize(QSize(600, 50));
        slider_x_vac->setCursor(QCursor(Qt::OpenHandCursor));
        slider_x_vac->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_x_vac->setMinimum(1);
        slider_x_vac->setMaximum(80);
        slider_x_vac->setValue(1);
        slider_x_vac->setOrientation(Qt::Horizontal);
        slider_x_vac->setTickPosition(QSlider::TicksBelow);
        slider_x_vac->setTickInterval(20);

        gridLayout->addWidget(slider_x_vac, 3, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 6, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMaximumSize(QSize(30, 50));
        label_4->setFont(font3);

        gridLayout->addWidget(label_4, 1, 6, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(35, 0));
        label->setMaximumSize(QSize(30, 50));
        label->setFont(font3);

        gridLayout->addWidget(label, 7, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 2, 1, 1);

        btn_x_vac_up = new QPushButton(layoutWidget);
        btn_x_vac_up->setObjectName(QStringLiteral("btn_x_vac_up"));
        sizePolicy2.setHeightForWidth(btn_x_vac_up->sizePolicy().hasHeightForWidth());
        btn_x_vac_up->setSizePolicy(sizePolicy2);
        btn_x_vac_up->setMinimumSize(QSize(0, 50));
        btn_x_vac_up->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_vac_up, 3, 3, 1, 1);

        btn_x_vac_dn = new QPushButton(layoutWidget);
        btn_x_vac_dn->setObjectName(QStringLiteral("btn_x_vac_dn"));
        sizePolicy2.setHeightForWidth(btn_x_vac_dn->sizePolicy().hasHeightForWidth());
        btn_x_vac_dn->setSizePolicy(sizePolicy2);
        btn_x_vac_dn->setMinimumSize(QSize(0, 50));
        btn_x_vac_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_vac_dn, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        btn_x_phase_up = new QPushButton(layoutWidget);
        btn_x_phase_up->setObjectName(QStringLiteral("btn_x_phase_up"));
        sizePolicy2.setHeightForWidth(btn_x_phase_up->sizePolicy().hasHeightForWidth());
        btn_x_phase_up->setSizePolicy(sizePolicy2);
        btn_x_phase_up->setMinimumSize(QSize(0, 50));
        btn_x_phase_up->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn_x_phase_up, 7, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 50, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 4, 1, 1);

        textEdit_x_freq = new QTextEdit(layoutWidget);
        textEdit_x_freq->setObjectName(QStringLiteral("textEdit_x_freq"));
        sizePolicy1.setHeightForWidth(textEdit_x_freq->sizePolicy().hasHeightForWidth());
        textEdit_x_freq->setSizePolicy(sizePolicy1);
        textEdit_x_freq->setMaximumSize(QSize(55, 40));
        QFont font4;
        font4.setPointSize(16);
        textEdit_x_freq->setFont(font4);
        textEdit_x_freq->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_x_freq->setLayoutDirection(Qt::LeftToRight);
        textEdit_x_freq->setAutoFillBackground(false);
        textEdit_x_freq->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_x_freq->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_freq->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_freq->setAcceptRichText(false);

        gridLayout->addWidget(textEdit_x_freq, 1, 5, 1, 1);

        textEdit_x_vac = new QTextEdit(layoutWidget);
        textEdit_x_vac->setObjectName(QStringLiteral("textEdit_x_vac"));
        sizePolicy1.setHeightForWidth(textEdit_x_vac->sizePolicy().hasHeightForWidth());
        textEdit_x_vac->setSizePolicy(sizePolicy1);
        textEdit_x_vac->setMaximumSize(QSize(55, 40));
        textEdit_x_vac->setFont(font4);
        textEdit_x_vac->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_x_vac->setLayoutDirection(Qt::LeftToRight);
        textEdit_x_vac->setAutoFillBackground(false);
        textEdit_x_vac->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_x_vac->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_vac->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_vac->setAcceptRichText(false);

        gridLayout->addWidget(textEdit_x_vac, 3, 5, 1, 1);

        textEdit_x_vdc = new QTextEdit(layoutWidget);
        textEdit_x_vdc->setObjectName(QStringLiteral("textEdit_x_vdc"));
        sizePolicy1.setHeightForWidth(textEdit_x_vdc->sizePolicy().hasHeightForWidth());
        textEdit_x_vdc->setSizePolicy(sizePolicy1);
        textEdit_x_vdc->setMaximumSize(QSize(55, 40));
        textEdit_x_vdc->setFont(font4);
        textEdit_x_vdc->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_x_vdc->setLayoutDirection(Qt::LeftToRight);
        textEdit_x_vdc->setAutoFillBackground(false);
        textEdit_x_vdc->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_x_vdc->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_vdc->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_vdc->setAcceptRichText(false);

        gridLayout->addWidget(textEdit_x_vdc, 5, 5, 1, 1);

        textEdit_x_phase = new QTextEdit(layoutWidget);
        textEdit_x_phase->setObjectName(QStringLiteral("textEdit_x_phase"));
        sizePolicy1.setHeightForWidth(textEdit_x_phase->sizePolicy().hasHeightForWidth());
        textEdit_x_phase->setSizePolicy(sizePolicy1);
        textEdit_x_phase->setMaximumSize(QSize(55, 40));
        textEdit_x_phase->setFont(font4);
        textEdit_x_phase->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_x_phase->setLayoutDirection(Qt::LeftToRight);
        textEdit_x_phase->setAutoFillBackground(false);
        textEdit_x_phase->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_x_phase->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_phase->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_x_phase->setAcceptRichText(false);

        gridLayout->addWidget(textEdit_x_phase, 7, 5, 1, 1);

        slider_x_freq = new QSlider(layoutWidget);
        slider_x_freq->setObjectName(QStringLiteral("slider_x_freq"));
        sizePolicy3.setHeightForWidth(slider_x_freq->sizePolicy().hasHeightForWidth());
        slider_x_freq->setSizePolicy(sizePolicy3);
        slider_x_freq->setMinimumSize(QSize(0, 50));
        slider_x_freq->setMaximumSize(QSize(600, 50));
        slider_x_freq->setCursor(QCursor(Qt::OpenHandCursor));
        slider_x_freq->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_x_freq->setMinimum(1);
        slider_x_freq->setMaximum(100);
        slider_x_freq->setValue(1);
        slider_x_freq->setOrientation(Qt::Horizontal);
        slider_x_freq->setTickPosition(QSlider::TicksBelow);
        slider_x_freq->setTickInterval(20);

        gridLayout->addWidget(slider_x_freq, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(tab_x, QString());
        tab_y = new QWidget();
        tab_y->setObjectName(QStringLiteral("tab_y"));
        layoutWidget_2 = new QWidget(tab_y);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 611, 371));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_y_wf_sin = new QPushButton(layoutWidget_2);
        btn_y_wf_sin->setObjectName(QStringLiteral("btn_y_wf_sin"));
        sizePolicy.setHeightForWidth(btn_y_wf_sin->sizePolicy().hasHeightForWidth());
        btn_y_wf_sin->setSizePolicy(sizePolicy);
        btn_y_wf_sin->setMinimumSize(QSize(0, 50));
        btn_y_wf_sin->setFont(font2);
        btn_y_wf_sin->setCheckable(true);
        btn_y_wf_sin->setChecked(true);

        horizontalLayout_3->addWidget(btn_y_wf_sin);

        btn_y_wf_saw = new QPushButton(layoutWidget_2);
        btn_y_wf_saw->setObjectName(QStringLiteral("btn_y_wf_saw"));
        sizePolicy.setHeightForWidth(btn_y_wf_saw->sizePolicy().hasHeightForWidth());
        btn_y_wf_saw->setSizePolicy(sizePolicy);
        btn_y_wf_saw->setMinimumSize(QSize(0, 50));
        btn_y_wf_saw->setFont(font2);
        btn_y_wf_saw->setCheckable(true);

        horizontalLayout_3->addWidget(btn_y_wf_saw);

        btn_y_wf_trg = new QPushButton(layoutWidget_2);
        btn_y_wf_trg->setObjectName(QStringLiteral("btn_y_wf_trg"));
        sizePolicy.setHeightForWidth(btn_y_wf_trg->sizePolicy().hasHeightForWidth());
        btn_y_wf_trg->setSizePolicy(sizePolicy);
        btn_y_wf_trg->setMinimumSize(QSize(0, 50));
        btn_y_wf_trg->setFont(font2);
        btn_y_wf_trg->setCheckable(true);

        horizontalLayout_3->addWidget(btn_y_wf_trg);

        btn_y_wf_sq = new QPushButton(layoutWidget_2);
        btn_y_wf_sq->setObjectName(QStringLiteral("btn_y_wf_sq"));
        sizePolicy.setHeightForWidth(btn_y_wf_sq->sizePolicy().hasHeightForWidth());
        btn_y_wf_sq->setSizePolicy(sizePolicy);
        btn_y_wf_sq->setMinimumSize(QSize(0, 50));
        btn_y_wf_sq->setFont(font1);
        btn_y_wf_sq->setCheckable(true);

        horizontalLayout_3->addWidget(btn_y_wf_sq);


        verticalLayout_3->addLayout(horizontalLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMaximumSize(QSize(30, 50));
        label_9->setFont(font3);

        gridLayout_2->addWidget(label_9, 5, 6, 1, 1);

        btn_y_vdc_dn = new QPushButton(layoutWidget_2);
        btn_y_vdc_dn->setObjectName(QStringLiteral("btn_y_vdc_dn"));
        sizePolicy2.setHeightForWidth(btn_y_vdc_dn->sizePolicy().hasHeightForWidth());
        btn_y_vdc_dn->setSizePolicy(sizePolicy2);
        btn_y_vdc_dn->setMinimumSize(QSize(0, 50));
        btn_y_vdc_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_vdc_dn, 5, 1, 1, 1);

        btn_y_phase_dn = new QPushButton(layoutWidget_2);
        btn_y_phase_dn->setObjectName(QStringLiteral("btn_y_phase_dn"));
        sizePolicy2.setHeightForWidth(btn_y_phase_dn->sizePolicy().hasHeightForWidth());
        btn_y_phase_dn->setSizePolicy(sizePolicy2);
        btn_y_phase_dn->setMinimumSize(QSize(0, 50));
        btn_y_phase_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_phase_dn, 7, 1, 1, 1);

        btn_y_freq_up = new QPushButton(layoutWidget_2);
        btn_y_freq_up->setObjectName(QStringLiteral("btn_y_freq_up"));
        sizePolicy2.setHeightForWidth(btn_y_freq_up->sizePolicy().hasHeightForWidth());
        btn_y_freq_up->setSizePolicy(sizePolicy2);
        btn_y_freq_up->setMinimumSize(QSize(0, 50));
        btn_y_freq_up->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_freq_up, 1, 3, 1, 1);

        slider_y_phase = new QSlider(layoutWidget_2);
        slider_y_phase->setObjectName(QStringLiteral("slider_y_phase"));
        sizePolicy3.setHeightForWidth(slider_y_phase->sizePolicy().hasHeightForWidth());
        slider_y_phase->setSizePolicy(sizePolicy3);
        slider_y_phase->setMinimumSize(QSize(0, 50));
        slider_y_phase->setMaximumSize(QSize(600, 50));
        slider_y_phase->setCursor(QCursor(Qt::OpenHandCursor));
        slider_y_phase->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_y_phase->setMaximum(360);
        slider_y_phase->setSingleStep(1);
        slider_y_phase->setValue(0);
        slider_y_phase->setOrientation(Qt::Horizontal);
        slider_y_phase->setTickPosition(QSlider::TicksBelow);
        slider_y_phase->setTickInterval(90);

        gridLayout_2->addWidget(slider_y_phase, 7, 2, 1, 1);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy4.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy4);
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMaximumSize(QSize(30, 50));
        label_11->setFont(font3);

        gridLayout_2->addWidget(label_11, 3, 6, 1, 1);

        slider_y_vdc = new QSlider(layoutWidget_2);
        slider_y_vdc->setObjectName(QStringLiteral("slider_y_vdc"));
        sizePolicy3.setHeightForWidth(slider_y_vdc->sizePolicy().hasHeightForWidth());
        slider_y_vdc->setSizePolicy(sizePolicy3);
        slider_y_vdc->setMinimumSize(QSize(0, 50));
        slider_y_vdc->setMaximumSize(QSize(600, 50));
        slider_y_vdc->setCursor(QCursor(Qt::OpenHandCursor));
        slider_y_vdc->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_y_vdc->setMaximum(160);
        slider_y_vdc->setValue(0);
        slider_y_vdc->setOrientation(Qt::Horizontal);
        slider_y_vdc->setTickPosition(QSlider::TicksBelow);
        slider_y_vdc->setTickInterval(40);

        gridLayout_2->addWidget(slider_y_vdc, 5, 2, 1, 1);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 5, 0, 1, 1);

        btn_y_vdc_up = new QPushButton(layoutWidget_2);
        btn_y_vdc_up->setObjectName(QStringLiteral("btn_y_vdc_up"));
        sizePolicy2.setHeightForWidth(btn_y_vdc_up->sizePolicy().hasHeightForWidth());
        btn_y_vdc_up->setSizePolicy(sizePolicy2);
        btn_y_vdc_up->setMinimumSize(QSize(0, 50));
        btn_y_vdc_up->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_vdc_up, 5, 3, 1, 1);

        slider_y_vac = new QSlider(layoutWidget_2);
        slider_y_vac->setObjectName(QStringLiteral("slider_y_vac"));
        sizePolicy3.setHeightForWidth(slider_y_vac->sizePolicy().hasHeightForWidth());
        slider_y_vac->setSizePolicy(sizePolicy3);
        slider_y_vac->setMinimumSize(QSize(0, 50));
        slider_y_vac->setMaximumSize(QSize(600, 50));
        slider_y_vac->setCursor(QCursor(Qt::OpenHandCursor));
        slider_y_vac->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_y_vac->setMinimum(1);
        slider_y_vac->setMaximum(80);
        slider_y_vac->setValue(1);
        slider_y_vac->setOrientation(Qt::Horizontal);
        slider_y_vac->setTickPosition(QSlider::TicksBelow);
        slider_y_vac->setTickInterval(20);

        gridLayout_2->addWidget(slider_y_vac, 3, 2, 1, 1);

        btn_y_freq_dn = new QPushButton(layoutWidget_2);
        btn_y_freq_dn->setObjectName(QStringLiteral("btn_y_freq_dn"));
        sizePolicy2.setHeightForWidth(btn_y_freq_dn->sizePolicy().hasHeightForWidth());
        btn_y_freq_dn->setSizePolicy(sizePolicy2);
        btn_y_freq_dn->setMinimumSize(QSize(0, 50));
        btn_y_freq_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_freq_dn, 1, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 6, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 0, 2, 1, 1);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMaximumSize(QSize(30, 50));
        label_13->setFont(font3);

        gridLayout_2->addWidget(label_13, 1, 6, 1, 1);

        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMinimumSize(QSize(35, 0));
        label_14->setMaximumSize(QSize(30, 50));
        label_14->setFont(font3);

        gridLayout_2->addWidget(label_14, 7, 6, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 2, 2, 1, 1);

        btn_y_vac_up = new QPushButton(layoutWidget_2);
        btn_y_vac_up->setObjectName(QStringLiteral("btn_y_vac_up"));
        sizePolicy2.setHeightForWidth(btn_y_vac_up->sizePolicy().hasHeightForWidth());
        btn_y_vac_up->setSizePolicy(sizePolicy2);
        btn_y_vac_up->setMinimumSize(QSize(0, 50));
        btn_y_vac_up->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_vac_up, 3, 3, 1, 1);

        btn_y_vac_dn = new QPushButton(layoutWidget_2);
        btn_y_vac_dn->setObjectName(QStringLiteral("btn_y_vac_dn"));
        sizePolicy2.setHeightForWidth(btn_y_vac_dn->sizePolicy().hasHeightForWidth());
        btn_y_vac_dn->setSizePolicy(sizePolicy2);
        btn_y_vac_dn->setMinimumSize(QSize(0, 50));
        btn_y_vac_dn->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_vac_dn, 3, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_10, 4, 2, 1, 1);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy4.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy4);
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_15, 3, 0, 1, 1);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy4.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy4);
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_16, 7, 0, 1, 1);

        btn_y_phase_up = new QPushButton(layoutWidget_2);
        btn_y_phase_up->setObjectName(QStringLiteral("btn_y_phase_up"));
        sizePolicy2.setHeightForWidth(btn_y_phase_up->sizePolicy().hasHeightForWidth());
        btn_y_phase_up->setSizePolicy(sizePolicy2);
        btn_y_phase_up->setMinimumSize(QSize(0, 50));
        btn_y_phase_up->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(btn_y_phase_up, 7, 3, 1, 1);

        slider_y_freq = new QSlider(layoutWidget_2);
        slider_y_freq->setObjectName(QStringLiteral("slider_y_freq"));
        sizePolicy3.setHeightForWidth(slider_y_freq->sizePolicy().hasHeightForWidth());
        slider_y_freq->setSizePolicy(sizePolicy3);
        slider_y_freq->setMinimumSize(QSize(0, 50));
        slider_y_freq->setMaximumSize(QSize(600, 50));
        slider_y_freq->setCursor(QCursor(Qt::OpenHandCursor));
        slider_y_freq->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background-color: lightGray;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"    background-color: gray;\n"
"    height: 30px;\n"
"    width: 30px;\n"
"    margin: -15px 0px;\n"
"    }"));
        slider_y_freq->setMinimum(1);
        slider_y_freq->setMaximum(100);
        slider_y_freq->setValue(1);
        slider_y_freq->setOrientation(Qt::Horizontal);
        slider_y_freq->setTickPosition(QSlider::TicksBelow);
        slider_y_freq->setTickInterval(20);

        gridLayout_2->addWidget(slider_y_freq, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 50, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 4, 1, 1);

        textEdit_y_freq = new QTextEdit(layoutWidget_2);
        textEdit_y_freq->setObjectName(QStringLiteral("textEdit_y_freq"));
        sizePolicy1.setHeightForWidth(textEdit_y_freq->sizePolicy().hasHeightForWidth());
        textEdit_y_freq->setSizePolicy(sizePolicy1);
        textEdit_y_freq->setMaximumSize(QSize(55, 40));
        textEdit_y_freq->setFont(font4);
        textEdit_y_freq->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_y_freq->setLayoutDirection(Qt::LeftToRight);
        textEdit_y_freq->setAutoFillBackground(false);
        textEdit_y_freq->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_y_freq->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_freq->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_freq->setAcceptRichText(false);

        gridLayout_2->addWidget(textEdit_y_freq, 1, 5, 1, 1);

        textEdit_y_vac = new QTextEdit(layoutWidget_2);
        textEdit_y_vac->setObjectName(QStringLiteral("textEdit_y_vac"));
        sizePolicy1.setHeightForWidth(textEdit_y_vac->sizePolicy().hasHeightForWidth());
        textEdit_y_vac->setSizePolicy(sizePolicy1);
        textEdit_y_vac->setMaximumSize(QSize(55, 40));
        textEdit_y_vac->setFont(font4);
        textEdit_y_vac->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_y_vac->setLayoutDirection(Qt::LeftToRight);
        textEdit_y_vac->setAutoFillBackground(false);
        textEdit_y_vac->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_y_vac->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_vac->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_vac->setAcceptRichText(false);

        gridLayout_2->addWidget(textEdit_y_vac, 3, 5, 1, 1);

        textEdit_y_vdc = new QTextEdit(layoutWidget_2);
        textEdit_y_vdc->setObjectName(QStringLiteral("textEdit_y_vdc"));
        sizePolicy1.setHeightForWidth(textEdit_y_vdc->sizePolicy().hasHeightForWidth());
        textEdit_y_vdc->setSizePolicy(sizePolicy1);
        textEdit_y_vdc->setMaximumSize(QSize(55, 40));
        textEdit_y_vdc->setFont(font4);
        textEdit_y_vdc->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_y_vdc->setLayoutDirection(Qt::LeftToRight);
        textEdit_y_vdc->setAutoFillBackground(false);
        textEdit_y_vdc->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_y_vdc->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_vdc->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_vdc->setAcceptRichText(false);

        gridLayout_2->addWidget(textEdit_y_vdc, 5, 5, 1, 1);

        textEdit_y_phase = new QTextEdit(layoutWidget_2);
        textEdit_y_phase->setObjectName(QStringLiteral("textEdit_y_phase"));
        sizePolicy1.setHeightForWidth(textEdit_y_phase->sizePolicy().hasHeightForWidth());
        textEdit_y_phase->setSizePolicy(sizePolicy1);
        textEdit_y_phase->setMaximumSize(QSize(55, 40));
        textEdit_y_phase->setFont(font4);
        textEdit_y_phase->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit_y_phase->setLayoutDirection(Qt::LeftToRight);
        textEdit_y_phase->setAutoFillBackground(false);
        textEdit_y_phase->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_y_phase->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_phase->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_y_phase->setAcceptRichText(false);

        gridLayout_2->addWidget(textEdit_y_phase, 7, 5, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        tabWidget->addTab(tab_y, QString());
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(680, 0, 103, 461));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        state = new QLabel(layoutWidget1);
        state->setObjectName(QStringLiteral("state"));
        state->setMaximumSize(QSize(16777215, 60));
        QFont font5;
        font5.setPointSize(30);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        state->setFont(font5);
        state->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(state);

        Run = new QPushButton(layoutWidget1);
        Run->setObjectName(QStringLiteral("Run"));
        sizePolicy.setHeightForWidth(Run->sizePolicy().hasHeightForWidth());
        Run->setSizePolicy(sizePolicy);
        Run->setFont(font);
        Run->setCheckable(false);

        verticalLayout->addWidget(Run);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        Stop = new QPushButton(layoutWidget1);
        Stop->setObjectName(QStringLiteral("Stop"));
        sizePolicy.setHeightForWidth(Stop->sizePolicy().hasHeightForWidth());
        Stop->setSizePolicy(sizePolicy);
        Stop->setFont(font);

        verticalLayout->addWidget(Stop);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        Exit = new QPushButton(layoutWidget1);
        Exit->setObjectName(QStringLiteral("Exit"));
        sizePolicy.setHeightForWidth(Exit->sizePolicy().hasHeightForWidth());
        Exit->setSizePolicy(sizePolicy);
        Exit->setFont(font);

        verticalLayout->addWidget(Exit);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(397, 20, 261, 42));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        enable_x = new QCheckBox(layoutWidget2);
        enable_x->setObjectName(QStringLiteral("enable_x"));
        enable_x->setMinimumSize(QSize(0, 30));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        enable_x->setFont(font6);
        enable_x->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 30px;\n"
"     height: 30px;\n"
"}"));
        enable_x->setChecked(true);
        enable_x->setTristate(false);

        horizontalLayout_2->addWidget(enable_x);

        enable_y = new QCheckBox(layoutWidget2);
        enable_y->setObjectName(QStringLiteral("enable_y"));
        enable_y->setMinimumSize(QSize(0, 30));
        enable_y->setFont(font6);
        enable_y->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 30px;\n"
"     height: 30px;\n"
"}"));
        enable_y->setChecked(true);
        enable_y->setTristate(false);

        horizontalLayout_2->addWidget(enable_y);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_x_wf_sin->setText(QApplication::translate("MainWindow", "Sine", nullptr));
        btn_x_wf_saw->setText(QApplication::translate("MainWindow", "Sawtooth", nullptr));
        btn_x_wf_trg->setText(QApplication::translate("MainWindow", "Triangle", nullptr));
        btn_x_wf_sq->setText(QApplication::translate("MainWindow", "Square", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "V", nullptr));
        btn_x_vdc_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        btn_x_phase_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        btn_x_freq_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Frequency", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "V", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Offset", nullptr));
        btn_x_vdc_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        btn_x_freq_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Hz", nullptr));
        label->setText(QApplication::translate("MainWindow", "deg", nullptr));
        btn_x_vac_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        btn_x_vac_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Amplitude", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Phase", nullptr));
        btn_x_phase_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_x), QApplication::translate("MainWindow", "X Axis", nullptr));
        btn_y_wf_sin->setText(QApplication::translate("MainWindow", "Sine", nullptr));
        btn_y_wf_saw->setText(QApplication::translate("MainWindow", "Sawtooth", nullptr));
        btn_y_wf_trg->setText(QApplication::translate("MainWindow", "Triangle", nullptr));
        btn_y_wf_sq->setText(QApplication::translate("MainWindow", "Square", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "V", nullptr));
        btn_y_vdc_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        btn_y_phase_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        btn_y_freq_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Frequency", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "V", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Offset", nullptr));
        btn_y_vdc_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        btn_y_freq_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Hz", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "deg", nullptr));
        btn_y_vac_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        btn_y_vac_dn->setText(QApplication::translate("MainWindow", "<", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Amplitude", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Phase", nullptr));
        btn_y_phase_up->setText(QApplication::translate("MainWindow", ">", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_y), QApplication::translate("MainWindow", "Y Axis", nullptr));
        state->setText(QApplication::translate("MainWindow", "KOC", nullptr));
        Run->setText(QApplication::translate("MainWindow", "Run", nullptr));
        Stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        Exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        enable_x->setText(QApplication::translate("MainWindow", "Enable X", nullptr));
        enable_y->setText(QApplication::translate("MainWindow", "Enable Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
