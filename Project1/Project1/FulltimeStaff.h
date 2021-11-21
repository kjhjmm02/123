#pragma once
#include "Staff.h"

#define LOW_RATE_BONUS		(50.0)
#define MEDIUM_RATE_BONUS	(100.0)
#define HIGH_RATE_BONUS		(200.0)

class CFulltimeStaff : public CStaff
{
private:
	//int bonus;
	float calcBonus();
public:
	CFulltimeStaff(int nId, string strName, unsigned int nAge, string strTelephoneNumber, float fQualityRate);
	float calcSalary();
};