#include <QApplication>
#include <QMessageBox>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("点击我");
    button.setWindowTitle("Qt6 HelloWorld");
    button.resize(240, 80);

    QObject::connect(&button, &QPushButton::clicked, [&button]() {
        QMessageBox::information(&button, "提示", "Hello World");
    });

    button.show();

    return app.exec();
}
