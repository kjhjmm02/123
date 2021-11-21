#pragma once
#include "Staff.h"

#define TIME_RATE_PART_TIME	(0.5)

class CPartTimeStaff : public CStaff
{
private:
	//
public:
	CPartTimeStaff(int nId, string strName, unsigned int nAge, string strTelephoneNumber, float fQualityRate);
	~CPartTimeStaff();
	double calcSalary();
};