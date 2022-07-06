/*#include <QtCore/QCoreApplication>

#include<cstdio>
#include<iostream>
#include "main.h"*/
//using namespace std;
//using namespace spdlog;
/*
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    /*
    printf("Hello Qt!\n%i %s",argc,argv[1]);
#ifdef _DEBUG
    printf("Debug Mode");
#endif // _DEBUG
    */
#ifdef _DEBUG
    //set_level(level::debug);
#else
    //set_level(level::info);
#endif // _DEBUG
/*
    if (argc > 1)
    {
        filePath = argv[1];
        loadFile(filePath);
    }
    printf("========== 员工目录管理系统 3.0 ==========\n");
    printf(" 1. 查看所有的员工\n");
    printf(" 2. 添加员工\n");
    printf(" 3. 删除员工\n");
    printf(" 4. 查找员工\n");
    printf(" 5. 保存员工目录\n");
    printf(" 6. 加载员工目录\n");
    printf(" 7. 修改员工信息\n");
    printf(" 8. 删除所有员工\n");
    printf(" 9. 退出系统\n");
    int choice;
    string name, number, comment, email, sex, salary, edu;
    while (1)
    {
        cin >> choice;
		switch (choice)
		{
		case 1:
			for (int i = 0; i < employees.size(); i++)
			{
				printf("%s", employees[i].getInfo());
			}
			break;
		case 2:
			
			cin >> name >> sex >> number >> comment >> email >> edu >> salary;
			employees.push_back(Employee(name, sex, number, comment, email, edu, salary));
			break;
		case 3:
			int tmp;
			scanf("%d", &tmp);
			employees.erase(begin(employees) + tmp - 1);
			break;
		default:
			exit(0);
			break;
		}
    }
    
    //return a.exec();
}
*/

#include "json/json.h"
#include <fstream>
#include <iostream>
/** \brief Parse from stream, collect comments and capture error info.
 * Example Usage:
 * $g++ readFromStream.cpp -ljsoncpp -std=c++11 -o readFromStream
 * $./readFromStream
 * // comment head
 * {
 *    // comment before
 *    "key" : "value"
 * }
 * // comment after
 * // comment tail
 */
    int main(int argc, char* argv[]) {
    Json::Value root;
    std::ifstream ifs;
    ifs.open(argv[1]);

    Json::CharReaderBuilder builder;
    builder["collectComments"] = true;
    JSONCPP_STRING errs;
    if (!parseFromStream(builder, ifs, &root, &errs)) {
        std::cout << errs << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << root << std::endl;
    return EXIT_SUCCESS;
}
