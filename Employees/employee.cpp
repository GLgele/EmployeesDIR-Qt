#include "employee.h"
#include<algorithm>

Employee::Employee()
{
}

Employee::Employee(/*int id, */string name, string sex, string number, string comment, string email, string edu, string salary)
{
	//this->id = id;
	setInfo(name, sex, number, comment, email, edu, salary);
}

Employee::Employee(vector<string> src)
{
	setInfo(src[0],src[1],src[2],src[3],src[4],src[5],src[6]);
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

bool Employee::find(string type, string src)
{
	transform(src.begin(), src.end(), src.begin(), ::tolower);
	if (type == "name")
	{
		transform(name.begin(), name.end(), name.begin(), ::tolower);
		return bool(name.find(src)!=-1);
	}
	else if (type == "sex")
	{
		transform(sex.begin(), sex.end(), sex.begin(), ::tolower);
		return bool(sex.find(src) != -1);
	}
	else if (type == "number")
	{
		transform(number.begin(), number.end(), number.begin(), ::tolower);
		return bool(number.find(src) != -1);
	}
	else if (type == "comment")
	{
		transform(comment.begin(), comment.end(), comment.begin(), ::tolower);
		return bool(comment.find(src) != -1);
	}
	else if (type == "email")
	{
		transform(email.begin(), email.end(), email.begin(), ::tolower);
		return bool(email.find(src) != -1);
	}
	else if (type == "edu")
	{
		transform(edu.begin(), edu.end(), edu.begin(), ::tolower);
		return bool(edu.find(src) != -1);
	}
	else if (type == "salary")
	{
		transform(salary.begin(), salary.end(), salary.begin(), ::tolower);
		return bool(salary.find(src) != -1);
	}
	else
	{
		return false;
	}
	return false;
}
