// Решение предыдущей задачи
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>

// Функция подгоняет изображение под нужный размер окна.
[[nodiscard("Не игнорируйте результат функции")]] QPixmap ResizeImgToFit(const QPixmap &src, int window_width, int window_height) {
    int img_w = src.width();
    int img_h = src.height();

    double w_ratio = double(img_w) / window_width;
    double h_ratio = double(img_h) / window_height;

    if ( w_ratio < h_ratio ) {
        return src.scaledToWidth(window_width);
    } else {
        return src.scaledToHeight(window_height);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //SetPixmap(":/cats/images/cat1.jpg");
    SetFolder(":/cats/images/");
    FitImage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FitImage()
{
    Q_ASSERT(!active_pixmap.isNull());

    // Напишите этот метод.
    // 1. Вызовите ResizeImgToFit.
    // 2. Поместите изображение в lbl_img.
    // 3. Измените размер lbl_img.
    // 4. Переместите lbl_img, пользуясь формулами из условия.
    QPixmap scaled_img = ResizeImgToFit(active_pixmap, width(), height());
    lbl_new_.setPixmap(scaled_img);
    lbl_new_.resize(scaled_img.width(), scaled_img.height());
    int lbl_x = (width() - scaled_img.width()) / 2;
    int lbl_y = (height() - scaled_img.height()) / 2;
    lbl_new_.move(lbl_x, lbl_y);

}

void MainWindow::resizeEvent(QResizeEvent*)
{
    FitImage();
}

void MainWindow::SetFolder(const QString& d) {

    cur_file_index_ = 0;
    current_folder_ = d;
    SetPixmap(GetCurrentFile());
    UpdateEnabled();
}

QString MainWindow::GetCurrentFile() {
    QDir dir{current_folder_};
    QStringList list_of_files = dir.entryList();
    int quantity_files = int(list_of_files.size());
    int file_index = std::min(cur_file_index_, quantity_files - 1);
    file_index = std::max(0, file_index);
    return dir.filePath(list_of_files[file_index]);
}

void MainWindow::UpdateEnabled() {
    // Количество изображений в папке.
    int max_images = QDir(current_folder_).entryList().size();

    // Устанавливаем активность кнопки «влево».
    ui->btn_left->setEnabled(cur_file_index_ > 0);

    // Устанавливаем активность кнопки «вправо».
    ui->btn_right->setEnabled(cur_file_index_ < max_images - 1);
}

void MainWindow::on_btn_left_clicked()
{
    cur_file_index_--;
    UpdateEnabled();

}


void MainWindow::on_btn_right_clicked()
{
    cur_file_index_++;
    UpdateEnabled();

}
