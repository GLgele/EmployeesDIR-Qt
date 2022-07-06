﻿// Employees.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include "main.h"
using namespace std;
#define _CRT_SECURE_NO_WARNGINGS

int main(int argc, char* argv[])
{
	string filePath;
	if (argc > 1)
	{
		filePath = argv[1];
		loadFile(filePath);
	}
	int choice;
	string name, number, comment, email, sex, salary, edu;
	while (1)
	{
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
			printf("Unknown input.\n");
			break;
		}
		system("pause");
		system("cls");
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件