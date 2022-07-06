#ifndef _MAIN_H_
#define _MAIN_H_

#include"employee.h"
#include<vector>
#include<string>
#include<cstdio>
#include<iostream>
#include<fstream>
using namespace std;
//using namespace spdlog;

/// <summary> Global Variables
vector<Employee> employees;
const string title = "EmployeesDIR - 3.0";
string filePath = "";
/// </summary>

void loadFile(string path)
{
	ifstream fin(path);
	//FILE* fp = NULL;
	if (/*!((fp = fopen(path.c_str(), "wb+")) == NULL)*/1)
	{
		int n;
		fin >> n;
		for (int i = 0; i < n; i++)
		{
			vector<string> tmps;
			string tmp;
			for (int j = 0; j < 7; j++)
			{
				fin >> tmp;
				tmps.push_back(tmp);
			}
			employees.push_back(Employee(tmps));
		}
		//fclose(fp);
		//fp = NULL;
		fin.close();
	}
	else
	{

	}
}

void saveFile(string path)
{
	FILE* fp = NULL;
	if (!((fp = fopen(path.c_str(), "wb+")) == NULL))
	{
		int n = employees.size();
		fprintf(fp, "%d\n", n);
		for (int i = 0; i < employees.size(); i++)
		{
			string tmp;
			vector<string> tmps = employees[i].getInfo();
			for (int j = 0; j < 7; j++)
			{
				tmp = tmps[j];
				fprintf(fp, "%s,", tmp.c_str());
			}
			fprintf(fp, "\n");
		}
		fclose(fp);
		fp = NULL;
	}
	else
	{

	}
}


#endif // !_MAIN_H_

