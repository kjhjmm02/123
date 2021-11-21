#include "PartTimeStaff.h"

CPartTimeStaff::CPartTimeStaff(int nId, string strName, unsigned int nAge,
	string strTelephoneNumber, float fQualityRate)
	: CStaff(nId, strName, nAge, strTelephoneNumber, fQualityRate)
{
	this->typeStaff = "Part Time";
}

CPartTimeStaff::~CPartTimeStaff()
{
	//
}

float CPartTimeStaff::calcSalary()
{ 
	return TIME_RATE_PART_TIME * BASIC_SALARY * qualityRate; 
}