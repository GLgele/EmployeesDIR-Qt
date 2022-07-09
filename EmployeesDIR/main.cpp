#include "employeesdir.h"
#include <QtWidgets/QApplication>
#include <QLocale>
#include <QTranslator>

#include<json/json.h>
#include<iostream>
#include<fstream>
#include <windows.h>
#include <stdio.h>
#include <stdarg.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString& locale : uiLanguages) {
        const QString baseName = "Hello_World_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    */
    EmployeesDIR w;
    w.show();
    /*Json::Value root;
    std::ifstream ifs;
    ifs.open("a.json");
    Json::CharReaderBuilder builder;
    builder["collectComments"] = true;
    JSONCPP_STRING errs;
    if (!parseFromStream(builder, ifs, &root, &errs)) {
        std::cout << errs << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << root << std::endl;
    return EXIT_SUCCESS;*/
    printf("Hello Qt!\n");
    return a.exec();
}
