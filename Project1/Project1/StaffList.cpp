#include "StaffList.h"
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

void CStaffList::Remove()
{
	if (pHead != NULL)
	{
		Node* temp = pHead;
		pHead = pHead->pNext;
		delete temp;
	}
}

void CStaffList::SearchByName(string name)
{
	Node* node = pHead;
	while (node != NULL)
	{
		if (name.compare(node->data->getName()) == 0)
		{
			node->data->Show();
		}
		node = node->pNext;

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
