#include <QCoreApplication>
#include <QProcess>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString commandString = "gnome-screensaver-command -l";
    QProcess *process = new QProcess();
    process->start(commandString);
    return a.exec();
}
