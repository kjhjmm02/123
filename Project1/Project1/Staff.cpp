#include "Staff.h"

CStaff::CStaff()
{
	id = 0;
	name = "";
	age = 0;
	telephoneNumber = "";
	qualityRate = 0.0;
	salary = 0.0;
}

CStaff::CStaff(int nId, string strName, unsigned int nAge, string strTelephoneNumber, float fQualityRate)
{
	id = nId;
	name = strName;
	age = nAge;
	telephoneNumber = strTelephoneNumber;
	qualityRate = fQualityRate;
	salary = 0.0;
}

CStaff::~CStaff()
{
	id = 0;
	name = "";
	age = 0;
	telephoneNumber = "";
	qualityRate = 0.0;
	salary = 0.0;
}

void CStaff::Show()
{
	cout << "Type		" << typeStaff << endl;
	cout << "ID:		" << id << endl;
	cout << "Name:		" << name << endl;
	cout << "Age:		" << age << endl;
	cout << "Phone:		" << telephoneNumber << endl;
	cout << "Salary:	" << salary << endl;
	cout << endl;
}
