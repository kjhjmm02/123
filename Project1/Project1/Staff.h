#pragma once
#include <string>
#include <iostream>
using namespace std;

#define BASIC_SALARY (500.0)
#define MAX_CHARACTER_NAME 100
#define MAX_CHARACTER_TELE 10

class CStaff
{
private:
	//
protected:
	string typeStaff;
	float salary;
	int id;
	string name;
	unsigned int age;
	string telephoneNumber;
	float qualityRate;
public:
	CStaff();
	CStaff(int nId, string strName, unsigned int nAge, 
			string strTelephoneNumber, float fQualityRate);
	virtual ~CStaff();
	virtual int getID() { return id; };
	virtual string getName() { return name; };
	virtual int getAge() { return age; };
	virtual void setSalary(float fSalary) { salary = fSalary; };
	virtual float getSalary() { return salary; };
	virtual void Show();
};
