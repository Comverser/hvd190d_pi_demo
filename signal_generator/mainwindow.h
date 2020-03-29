#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Run_clicked();

    void on_Stop_clicked();

    void on_Exit_clicked();

    void on_enable_x_clicked(bool checked);

    void on_enable_y_clicked(bool checked);

    void on_slider_x_freq_valueChanged(int value);
    void on_slider_y_freq_valueChanged(int value);

    void on_slider_x_phase_valueChanged(int value);
    void on_slider_y_phase_valueChanged(int value);

    void on_slider_x_vac_valueChanged(int value);
    void on_slider_y_vac_valueChanged(int value);

    void on_slider_x_vdc_valueChanged(int value);
    void on_slider_y_vdc_valueChanged(int value);

    void on_btn_x_freq_dn_clicked();
    void on_btn_y_freq_dn_clicked();

    void on_btn_x_freq_up_clicked();
    void on_btn_y_freq_up_clicked();

    void on_btn_x_phase_dn_clicked();
    void on_btn_y_phase_dn_clicked();

    void on_btn_x_phase_up_clicked();
    void on_btn_y_phase_up_clicked();

    void on_btn_x_vac_dn_clicked();
    void on_btn_y_vac_dn_clicked();

    void on_btn_x_vac_up_clicked();
    void on_btn_y_vac_up_clicked();

    void on_btn_x_vdc_dn_clicked();
    void on_btn_y_vdc_dn_clicked();

    void on_btn_x_vdc_up_clicked();
    void on_btn_y_vdc_up_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_btn_x_wf_sin_clicked();

    void on_btn_x_wf_saw_clicked();

    void on_btn_x_wf_trg_clicked();

    void on_btn_x_wf_sq_clicked();

    void on_btn_y_wf_sin_clicked();

    void on_btn_y_wf_saw_clicked();

    void on_btn_y_wf_trg_clicked();

    void on_btn_y_wf_sq_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
