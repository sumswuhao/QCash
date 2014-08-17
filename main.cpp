#include <QApplication>
#include "DefaultStyle.h"
#include "AccountEditor.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    a.setStyleSheet(DEFAULTSTYLE);

    AccountEditor accountEditor;
    accountEditor.show();

    return a.exec();

}
