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
			Node* temp = head;
			ModifiedInfo(temp->data);
		}
		head = head->pNext;
	}
}

void CStaffList::ModifiedInfo(CStaff* pInfoStaff)
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
		CFulltimeStaff objFullTime(id, name, age, telephoneNumber, qualityRate);
		pInfoStaff = &objFullTime;
	}
	else if(typeStaff.compare("Part Time") == 0)
	{
		CPartTimeStaff objPartTime(id, name, age, telephoneNumber, qualityRate);
		pInfoStaff = &objPartTime;
	}
	else if (typeStaff.compare("Hoursly") == 0)
	{
		cout << "Hours:	"; cin >> numOfHours;
		cout << "Phone Number:	";
		CHourslyStaff objHours(id, name, age, telephoneNumber, qualityRate, numOfHours);
		pInfoStaff = &objHours;
	}
	else
	{
		cout << "Invalid kind of staff" << endl;
	}

}

void CStaffList::SearchByName(string name)
{
	Node* head = pHead;
	while (head != NULL)
	{
		Node* temp = head;
		head = head->pNext;
		if (name.compare(temp->data->getName()) == 0)
		{
			temp->data->Show();
		}
	}
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
