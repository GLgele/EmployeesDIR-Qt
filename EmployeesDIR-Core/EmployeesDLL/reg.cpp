#include"reg.h"
#include"pch.h"

#include<fstream>
#include<string>
#include<vector>
using namespace std;

void loadFile(string path,vector<Employee> &employees)
{
	FILE* fp = NULL;
	if ((fp = fopen(path.c_str(), "rb+")) == NULL)
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

void saveFile(string path,vector<Employee> employees)
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

Employee::Employee()
{
}

Employee::Employee(/*int id, */string name, string sex, string number, string comment, string email, string edu, string salary)
{
	//this->id = id;
	setInfo(name, sex, number, comment, email, edu, salary);
}

Employee::~Employee()
{
}

vector<string> Employee::getInfo()
{
	vector<string> retval{ name,sex,number,comment,email,edu,salary };
	return retval;
}

void Employee::setInfo(string name, string sex, string number, string comment, string email, string edu, string salary)
{
	this->name = name;
	this->sex = sex;
	this->number = number;
	this->comment = comment;
	this->email = email;
	this->edu = edu;
	this->salary = salary;
	//spdlog::info("Get employee info:{0},info:{1}", name, getInfo());
}