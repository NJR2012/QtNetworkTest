#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "connect.cpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    ConnectToDatabase();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
