#pragma once
#ifdef DLL_API
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif // !Dll_API

#include<fstream>
#include<string>
#include<vector>
using namespace std;

class DLL_API Employee
{
private:
	//int id;
	string name, number, comment, email, sex, salary, edu;
public:
	Employee();
	Employee(string, string, string, string, string, string, string);
	~Employee();
	vector<string> getInfo();
	void setInfo(string, string, string, string, string, string, string);
};

DLL_API void loadFile(string path);