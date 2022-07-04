#include <QtCore/QCoreApplication>

#include<cstdio>
#include "main.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*
    printf("Hello Qt!\n%i %s",argc,argv[1]);
#ifdef _DEBUG
    printf("Debug Mode");
#endif // _DEBUG
    */
    if (argc > 1)
    {
        filePath = argv[1];
    }
    return a.exec();
}
