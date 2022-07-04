#ifndef _MAIN_H_
#define _MAIN_H_

#include"employee.h"
#include<map>
#include<string>
#include<cstdio>
using namespace std;

/// <summary> Global Variables
map<int, Employee> employees;
const string title = "EmployeesDIR - 3.0";
string filePath = "";
/// </summary>

void loadFile(string path)
{
	FILE* stream;
	if ((stream = fopen(path.c_str(), "w+")) == NULL)
	{

	}
}

#endif // !_MAIN_H_

