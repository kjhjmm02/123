#include "FulltimeStaff.h"

CFulltimeStaff::CFulltimeStaff(int nId, string strName, unsigned int nAge,
								string strTelephoneNumber, float fQualityRate)
	: CStaff(nId, strName, nAge, strTelephoneNumber, fQualityRate)
{
	this->typeStaff = "Full Time";
}

double CFulltimeStaff::calcSalary()
{
	return BASIC_SALARY * qualityRate + calcBonus();
}

float CFulltimeStaff::calcBonus()
{
	if (qualityRate >= 1 && qualityRate < 4) {
		return LOW_RATE_BONUS;
	} 
	else if (qualityRate >= 4 && qualityRate < 7) {
		return LOW_RATE_BONUS;
	}
	else if (qualityRate >= 7) {
		return LOW_RATE_BONUS;
	}
	return 0;
}