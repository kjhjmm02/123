#include "StaffList.h"
#include "FulltimeStaff.h"
#include "PartTimeStaff.h"
#include "HourslyStaff.h"
using namespace std;

CStaffList::CStaffList()
{ 
	pHead = NULL;
	pTail = NULL;
}

CStaffList::~CStaffList()
{
	Node* head = pHead;
	while (head)
	{
		Node* temp = head;
		head = head->pNext;
		delete temp->data;
		delete temp;
		temp = NULL;
	}
}

void CStaffList::AddStaff(CStaff* val)
{
	Node* newNode = new Node();
	newNode->data = val;
	if (pHead == NULL)
	{
		pHead = newNode;
		pTail = newNode;
	}
	else
	{
		pTail->pNext = newNode;
		pTail = newNode;
	}
}

void CStaffList::RemoveByID(int ID)
{
	Node* head = pHead;
	Node* temp = head;

	if (head->data->getID() == ID)
	{
		pHead = head->pNext;
		delete temp->data;
		delete temp;
		temp = NULL;
		return;
	}

	while (head != NULL)
	{
		temp = head->pNext;
		if (temp->data->getID() == ID)
		{
			head->pNext = head->pNext->pNext;
			delete temp;
			delete temp->data;
			temp = NULL;
			return;
		}
		head = head->pNext;
	}
}

void CStaffList::ModifyByID(int ID)
{
	Node* head = pHead;
	while (head != NULL)
	{
		if (head->data->getID() == ID)
		{
			CStaff *temp = InfoStaff();
			if (temp != NULL)
			{
				delete head->data;
				head->data = temp;
			}
		}
		head = head->pNext;
	}
}

CStaff* CStaffList::InfoStaff()
{
	string typeStaff;
	int id;
	string name;
	unsigned int age;
	string telephoneNumber;
	float qualityRate;
	float numOfHours;
	cout << "ID:	"; cin >> id;
	cout << "Kind of staff:	"; 
	cin.ignore();
	getline(cin, typeStaff);
	cout << "Name:	";
	cin.ignore();
	getline(std::cin, name);
	cout << "age:	"; cin >> age;
	cout << "Phone Number:	";
	cin.ignore();
	getline(std::cin, telephoneNumber);
	cout << "Quality Rate:	"; cin >> qualityRate;
	
	if (typeStaff.compare("Full Time") == 0)
	{
		CFulltimeStaff *pFullTime = new CFulltimeStaff(id, name, age, telephoneNumber, qualityRate);
		pFullTime->setSalary(pFullTime->calcSalary());
		return pFullTime;
	}
	else if(typeStaff.compare("Part Time") == 0)
	{
		CPartTimeStaff *pPartTime = new CPartTimeStaff(id, name, age, telephoneNumber, qualityRate);
		pPartTime->setSalary(pPartTime->calcSalary());
		return pPartTime;
	}
	else if (typeStaff.compare("Hoursly") == 0)
	{
		cout << "Hours:	"; cin >> numOfHours;
		CHourslyStaff *pHours = new CHourslyStaff(id, name, age, telephoneNumber, qualityRate, numOfHours);
		pHours->setSalary(pHours->calcSalary());
		return pHours;
	}
	else
	{
		cout << "Invalid kind of staff" << endl;
	}
	return NULL;
}

void CStaffList::SearchByName(string name)
{
	Node* head = pHead;
	int k = 0;
	while (head != NULL)
	{
		Node* temp = head;
		head = head->pNext;
		if (name.compare(temp->data->getName()) == 0)
		{
			temp->data->Show();
			k++;
		}
	}
	cout << "Found" << k << "staffs" << endl;
}

void CStaffList::ShowList()
{
	Node* temp = pHead;
	while (temp != NULL)
	{
		temp->data->Show();
		temp = temp->pNext;
	}
}
