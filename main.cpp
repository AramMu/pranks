#include <windows.h>

#include <iostream>
#include <opencv2/opencv.hpp>
#include <QMessageBox>
#include <QApplication>

using namespace std;

int main(int argc, char**argv)
{
    QApplication a(argc, argv);
    QMessageBox w("title", "textfsdres", QMessageBox::Critical, QMessageBox::Yes, QMessageBox::YesToAll, 0);
    w.show();
    //MessageBoxA(NULL, "AAAAA", "BBBBB", 0);

    return a.exec();
}
