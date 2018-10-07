#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "Backend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Backend backend;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("backend", &backend);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
