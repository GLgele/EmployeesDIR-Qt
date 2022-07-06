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

/// <summary> 
/// Global Variables
/// </summary>
vector<Employee> employees;
const string title = "EmployeesDIR - 3.0";
string filePath = "";


void loadFile(string path)
{
	//ifstream fin(path);
	FILE* fp = NULL;
	if (!((fp = fopen(path.c_str(), "r+")) == NULL))
	{
		employees.clear();
		employees.push_back(Employee("name", "sex", "number", "comment", "email", "edu", "salary"));
		int n;
		//fin >> n;
		fscanf(fp, "%d", &n);
		for (int i = 0; i < n; i++)
		{
			vector<string> tmps;
			string tmp;
			for (int j = 0; j < 7; j++)
			{
				//fin >> tmp;
				string tmp;
				tmp.resize(261);
				fscanf(fp,"%s	", &tmp[0]);
				tmps.push_back(tmp);
			}
			employees.push_back(Employee(tmps));
		}
		fclose(fp);
		fp = NULL;
		//fin.close();
	}
	else
	{
		printf("Failed to open file!\n");
	}
}

void saveFile(string path)
{
	FILE* fp = NULL;
	if (!((fp = fopen(path.c_str(), "w+")) == NULL))
	{
		int n = employees.size();
		//Print Title
		fprintf(fp, "%d\n", n);
		string tmps[7] = { "name","sex","number","comment","email","edu","salary" };
		for (int j = 0; j < 7; j++)
		{
			string tmp = tmps[j];
			fprintf(fp, "%s	", tmp.c_str());
		}
		fprintf(fp, "\n");

		for (int i = 0; i < employees.size(); i++)
		{
			string tmp;
			vector<string> tmps = employees[i].getInfo();
			for (int j = 0; j < 7; j++)
			{
				tmp = tmps[j];
				fprintf(fp, "%s	", tmp.c_str());
			}
			fprintf(fp, "\n");
		}
		fclose(fp);
		fp = NULL;
	}
	else
	{
		printf("Failed to open file!\n");
	}
}


#endif // !_MAIN_H_

