#include "HourslyStaff.h"

CHourslyStaff::CHourslyStaff(int nId, string strName, unsigned int nAge,
								string strTelephoneNumber, float fQualityRate, float fHours)
	: CStaff(nId, strName, nAge, strTelephoneNumber, fQualityRate)
{
	this->typeStaff = "Hoursly";
	this->numOfHours = fHours;
}

CHourslyStaff::~CHourslyStaff()
{
	//
}

double CHourslyStaff::calcSalary() 
{ 
	return calcHourslyRate() * BASIC_SALARY * qualityRate;
};

double CHourslyStaff::calcHourslyRate()
{ 
	return getNumberOfHours() / TIME_TOTAL;
}

void CHourslyStaff::Show()
{
	cout << "Type		" << typeStaff << endl;
	cout << "ID:		" << id << endl;
	cout << "Name:		" << name << endl;
	cout << "Age:		" << age << endl;
	cout << "Phone:		" << telephoneNumber << endl;
	cout << "Salary:	" << salary << endl;
	cout << "Hours:		" << numOfHours << endl;
	cout << endl;
}