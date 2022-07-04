#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include<string>
#include<vector>
using namespace std;

class Employee
{
	private:
		int id;
		string name, number, comment, email, sex, salary, edu;
	public:
		Employee();
		Employee(int,string,string,string,string,string,string,string);
		~Employee();
		vector<string> getInfo();
		void setInfo(string, string, string, string, string, string, string);
};

#endif // !_EMPLOYEE_H_



