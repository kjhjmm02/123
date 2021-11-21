#pragma once
#include "Staff.h"

#define TIME_TOTAL	(240.0)

class CHourslyStaff : public CStaff
{
private:
	float numOfHours;
	float calcHourslyRate();
public:
	CHourslyStaff(int nId, string strName, unsigned int nAge, string strTelephoneNumber, float fQualityRate, float fHours);
	~CHourslyStaff();
	float calcSalary();
	float getNumberOfHours() { return numOfHours; };
	void Show();
};