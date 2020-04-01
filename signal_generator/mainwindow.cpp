#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "libs/demo_wrapper.h"

/* header: thread */
#include <QtConcurrent/QtConcurrent>
#include <QCoreApplication>

#define volt_max_driv 160.0

/* variables: waveform conditions */
static int waveform_x = 0;
static int waveform_y = 0;
static double freq_x = 30;
static double freq_y = 30;
static double volt_x = 60.0;
static double volt_y = 60.0;
static double volt_off_x = 60.0;
static double volt_off_y = 60.0;
static double phase_x = 0.0;
static double phase_y = 0.0;

static QFuture<void> wf;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->state->setStyleSheet(QStringLiteral("QLabel{color: rgb(192, 192, 192);}"));

    // display parameter of x
    ui->slider_x_freq->setValue(static_cast<int>(freq_x));
    ui->slider_x_phase->setValue(static_cast<int>(phase_x));
    ui->slider_x_vac->setValue(static_cast<int>(volt_x));
    ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
    ui->textEdit_x_freq->setText(QString::number(freq_x));
    ui->textEdit_x_phase->setText(QString::number(phase_x));
    ui->textEdit_x_vac->setText(QString::number(volt_x));
    ui->textEdit_x_vdc->setText(QString::number(volt_off_x));

    // display parameter of y
    ui->slider_y_freq->setValue(static_cast<int>(freq_x));
    ui->slider_y_phase->setValue(static_cast<int>(phase_x));
    ui->slider_y_vac->setValue(static_cast<int>(volt_x));
    ui->slider_y_vdc->setValue(static_cast<int>(volt_off_x));
    ui->textEdit_y_freq->setText(QString::number(freq_x));
    ui->textEdit_y_phase->setText(QString::number(phase_x));
    ui->textEdit_y_vac->setText(QString::number(volt_x));
    ui->textEdit_y_vdc->setText(QString::number(volt_off_x));

    demo_init(0.30);
    demo_is_x_on(true);
    demo_is_y_on(true);
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
    demo_wf_gen();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Run_clicked()
{
    if (state == false)
    {
        demo_wf_gen();
        state = true;
        ui->state->setStyleSheet(QStringLiteral("QLabel{color: rgb(0, 255, 0);}"));
        wf = QtConcurrent::run(&demo_run);
    }
}

void MainWindow::on_Stop_clicked()
{
    if (state == true)
    {
        state = false;
        wf.waitForFinished();
        for (int i = 300000; i >= 0; i--)
        {
            double v_d_norm = static_cast<double>(i)*0.000001;
            demo_hold(v_d_norm);
        }
        ui->state->setStyleSheet(QStringLiteral("QLabel{color: rgb(192, 192, 192);}"));
    }
}

void MainWindow::on_Exit_clicked()
{
    MainWindow::on_Stop_clicked();

    demo_terminate();
    system("shutdown now");
    //QApplication::quit();
}

void MainWindow::on_enable_x_clicked(bool checked)
{
    MainWindow::on_Stop_clicked(); // stopped first, then enable value changed
    demo_is_x_on(checked);
}

void MainWindow::on_enable_y_clicked(bool checked)
{
    MainWindow::on_Stop_clicked();
    demo_is_y_on(checked);
}

// ==========================================================================

void MainWindow::on_slider_x_freq_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    freq_x = value;
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
    ui->textEdit_x_freq->setText(QString::number(freq_x));
}
void MainWindow::on_slider_y_freq_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    freq_y = value;
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
    ui->textEdit_y_freq->setText(QString::number(freq_y));
}

void MainWindow::on_slider_x_phase_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    phase_x = value;
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
    ui->textEdit_x_phase->setText(QString::number(phase_x));
}
void MainWindow::on_slider_y_phase_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    phase_y = value;
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
    ui->textEdit_y_phase->setText(QString::number(phase_y));
}

void MainWindow::on_slider_x_vac_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    volt_x = value;
    ui->textEdit_x_vac->setText(QString::number(volt_x));

    if ( volt_off_x < volt_x )
    {
        volt_off_x = volt_x;
        ui->textEdit_x_vdc->setText(QString::number(volt_off_x));
        ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
    }
    if ( (volt_off_x + volt_x) > volt_max_driv)
    {
        volt_off_x = volt_max_driv - volt_x;
        ui->textEdit_x_vdc->setText(QString::number(volt_off_x));
        ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
    }

    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
}
void MainWindow::on_slider_y_vac_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    volt_y = value;
    ui->textEdit_y_vac->setText(QString::number(volt_y));

    if ( volt_off_y < volt_y )
    {
        volt_off_y = volt_y;
        ui->textEdit_y_vdc->setText(QString::number(volt_off_y));
        ui->slider_y_vdc->setValue(static_cast<int>(volt_off_y));
    }
    if ( (volt_off_y + volt_y) > volt_max_driv)
    {
        volt_off_y = volt_max_driv - volt_y;
        ui->textEdit_y_vdc->setText(QString::number(volt_off_y));
        ui->slider_y_vdc->setValue(static_cast<int>(volt_off_y));
    }

    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
}

void MainWindow::on_slider_x_vdc_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    volt_off_x = value;
    ui->textEdit_x_vdc->setText(QString::number(volt_off_x));

    if ( volt_off_x < volt_x )
    {
        volt_off_x = volt_x;
        ui->textEdit_x_vdc->setText(QString::number(volt_off_x));
        ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
    }
    if ( (volt_off_x + volt_x) > volt_max_driv)
    {
        volt_off_x = volt_max_driv - volt_x;
        ui->textEdit_x_vdc->setText(QString::number(volt_off_x));
        ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
    }

    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
}
void MainWindow::on_slider_y_vdc_valueChanged(int value)
{
    MainWindow::on_Stop_clicked();
    volt_off_y = value;
    ui->textEdit_y_vdc->setText(QString::number(volt_off_y));


    if ( volt_off_y < volt_y )
    {
        volt_off_y = volt_y;
        ui->textEdit_y_vdc->setText(QString::number(volt_off_y));
        ui->slider_y_vdc->setValue(static_cast<int>(volt_off_y));
    }
    if ( (volt_off_y + volt_y) > volt_max_driv)
    {
        volt_off_y = volt_max_driv - volt_y;
        ui->textEdit_y_vdc->setText(QString::number(volt_off_y));
        ui->slider_y_vdc->setValue(static_cast<int>(volt_off_y));
    }

    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
}

void MainWindow::on_btn_x_freq_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    freq_x--;
    ui->slider_x_freq->setValue(static_cast<int>(freq_x));
}
void MainWindow::on_btn_y_freq_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    freq_y--;
    ui->slider_y_freq->setValue(static_cast<int>(freq_y));
}

void MainWindow::on_btn_x_freq_up_clicked()
{
    MainWindow::on_Stop_clicked();
    freq_x++;
    ui->slider_x_freq->setValue(static_cast<int>(freq_x));
}
void MainWindow::on_btn_y_freq_up_clicked()
{
    MainWindow::on_Stop_clicked();
    freq_y++;
    ui->slider_y_freq->setValue(static_cast<int>(freq_y));
}

void MainWindow::on_btn_x_phase_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    phase_x--;
    ui->slider_x_phase->setValue(static_cast<int>(phase_x));
}
void MainWindow::on_btn_y_phase_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    phase_y--;
    ui->slider_y_phase->setValue(static_cast<int>(phase_y));
}

void MainWindow::on_btn_x_phase_up_clicked()
{
    MainWindow::on_Stop_clicked();
    phase_x++;
    ui->slider_x_phase->setValue(static_cast<int>(phase_x));
}
void MainWindow::on_btn_y_phase_up_clicked()
{
    MainWindow::on_Stop_clicked();
    phase_y++;
    ui->slider_y_phase->setValue(static_cast<int>(phase_y));
}

void MainWindow::on_btn_x_vac_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_x--;
    ui->slider_x_vac->setValue(static_cast<int>(volt_x));
}
void MainWindow::on_btn_y_vac_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_y--;
    ui->slider_y_vac->setValue(static_cast<int>(volt_y));
}

void MainWindow::on_btn_x_vac_up_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_x++;
    ui->slider_x_vac->setValue(static_cast<int>(volt_x));
}
void MainWindow::on_btn_y_vac_up_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_y++;
    ui->slider_y_vac->setValue(static_cast<int>(volt_y));
}

void MainWindow::on_btn_x_vdc_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_off_x--;
    ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
}
void MainWindow::on_btn_y_vdc_dn_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_off_y--;
    ui->slider_y_vdc->setValue(static_cast<int>(volt_off_y));
}

void MainWindow::on_btn_x_vdc_up_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_off_x++;
    ui->slider_x_vdc->setValue(static_cast<int>(volt_off_x));
}
void MainWindow::on_btn_y_vdc_up_clicked()
{
    MainWindow::on_Stop_clicked();
    volt_off_y++;
    ui->slider_y_vdc->setValue(static_cast<int>(volt_off_y));
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    MainWindow::on_Stop_clicked();
}

void MainWindow::on_btn_x_wf_sin_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_x_wf_sin->setChecked(true);
    ui->btn_x_wf_saw->setChecked(false);
    ui->btn_x_wf_trg->setChecked(false);
    ui->btn_x_wf_sq->setChecked(false);
    waveform_x = 0;
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
}

void MainWindow::on_btn_x_wf_saw_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_x_wf_sin->setChecked(false);
    ui->btn_x_wf_saw->setChecked(true);
    ui->btn_x_wf_trg->setChecked(false);
    ui->btn_x_wf_sq->setChecked(false);
    waveform_x = 2;
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
}

void MainWindow::on_btn_x_wf_trg_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_x_wf_sin->setChecked(false);
    ui->btn_x_wf_saw->setChecked(false);
    ui->btn_x_wf_trg->setChecked(true);
    ui->btn_x_wf_sq->setChecked(false);
    waveform_x = 1;
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
}

void MainWindow::on_btn_x_wf_sq_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_x_wf_sin->setChecked(false);
    ui->btn_x_wf_saw->setChecked(false);
    ui->btn_x_wf_trg->setChecked(false);
    ui->btn_x_wf_sq->setChecked(true);
    waveform_x = 3;
    demo_wf_set_x(waveform_x, freq_x, volt_x, volt_off_x, phase_x);
}

void MainWindow::on_btn_y_wf_sin_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_y_wf_sin->setChecked(true);
    ui->btn_y_wf_saw->setChecked(false);
    ui->btn_y_wf_trg->setChecked(false);
    ui->btn_y_wf_sq->setChecked(false);
    waveform_y = 0;
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
}

void MainWindow::on_btn_y_wf_saw_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_y_wf_sin->setChecked(false);
    ui->btn_y_wf_saw->setChecked(true);
    ui->btn_y_wf_trg->setChecked(false);
    ui->btn_y_wf_sq->setChecked(false);
    waveform_y = 2;
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
}

void MainWindow::on_btn_y_wf_trg_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_y_wf_sin->setChecked(false);
    ui->btn_y_wf_saw->setChecked(false);
    ui->btn_y_wf_trg->setChecked(true);
    ui->btn_y_wf_sq->setChecked(false);
    waveform_y = 1;
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
}

void MainWindow::on_btn_y_wf_sq_clicked()
{
    MainWindow::on_Stop_clicked();
    ui->btn_y_wf_sin->setChecked(false);
    ui->btn_y_wf_saw->setChecked(false);
    ui->btn_y_wf_trg->setChecked(false);
    ui->btn_y_wf_sq->setChecked(true);
    waveform_y = 3;
    demo_wf_set_y(waveform_y, freq_y, volt_y, volt_off_y, phase_y);
}
