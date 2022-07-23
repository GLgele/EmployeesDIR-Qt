#ifndef _MAIN_H_
#define _MAIN_H_

#include "EmployeesDLL/pch.h"

#include"employee.h"
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
//using namespace spdlog;

/// <summary> Global Variables
vector<Employee> employees;
const string title = "EmployeesDIR - 3.0";
string filePath = "";
/// </summary>

void loadFile(string path)
{
	FILE* fp = NULL;
	if ((fp = fopen(path.c_str(), "wb+")) == NULL)
	{

	}
	else
	{
		for (int i = 0; i < employees.size(); i++)
		{
			fscanf(fp, "%s", employees[i]);
		}
		fclose(fp);
		fp = NULL;
	}
}

void saveFile(string path)
{
	FILE* fp = NULL;
	if ((fp = fopen(path.c_str(), "wb+")) == NULL)
	{

	}
	else
	{
		for (int i = 0; i < employees.size(); i++)
		{
			fprintf(fp, "%s", employees[i]);
		}
		fclose(fp);
		fp = NULL;
	}
}


#endif // !_MAIN_H_

