#pragma once
#include "Staff.h"
#include <conio.h>
#include <string>

struct Node
{
	CStaff* data;
	Node* pNext;
};

class CStaffList
{
private:
	Node* pHead;
	Node* pTail;
public:
	CStaffList();
	~CStaffList();
	void AddStaff(CStaff* val);
	void RemoveByID(int ID);
	void ModifyByID(int ID);
	void ModifiedInfo(CStaff * pInfoStaff);
	void SearchByName(string name);
	void ShowList();
};
