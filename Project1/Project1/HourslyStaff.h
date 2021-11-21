#pragma once
#include "Staff.h"

#define TIME_TOTAL	(240.0)

class CHourslyStaff : public CStaff
{
private:
	float numOfHours;
	double calcHourslyRate();
public:
	CHourslyStaff(int nId, string strName, unsigned int nAge, string strTelephoneNumber, float fQualityRate, float fHours);
	~CHourslyStaff();
	double calcSalary();
	float getNumberOfHours() { return numOfHours; };
	void Show();
};