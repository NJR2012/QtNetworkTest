#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QQmlContext>

#include "connect.cpp"
#include "sockettest.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QQmlContext *context = engine.rootContext();
    SocketTest sct;
    context->setContextProperty("SocketTest",&sct);
    context->setContextProperty("Mainwindow",&engine);

    //ConnectToDatabase();

    //SocketTest mTest;
    //mTest.Test();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
