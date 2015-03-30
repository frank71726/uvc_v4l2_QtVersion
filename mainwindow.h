#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include "video_device.h"
#include "v4l2grab.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    unsigned char rgb_frame_buffer[IMAGEWIDTH*IMAGEHEIGHT*3];
    ~MainWindow();

private slots:
    void on_PlayBut_released();
    void update();
    void on_SavePic_released();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    video_device *vd;
    size_t len;
    unsigned char *yuv_buffer_pointer;
    QString save_pic_name;
    bool save_picture_flag;
};

#endif // MAINWINDOW_H
