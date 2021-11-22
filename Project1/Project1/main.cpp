#include "FulltimeStaff.h";
#include "HourslyStaff.h";
#include "PartTimeStaff.h";
#include "StaffList.h";
#include <fstream>
#include <vector>

void CreateListFromFile()
{
	//vector<string> lines;
	string line;
	try
	{

		ifstream ifs("input.txt");
		if (!ifs) {
			throw "Error: file not opened.";
		}
		while (getline(ifs, line)) {
			//lines.push_back(line);
			for(int i = 0)
		}

	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
}


int MenuShow()
{
	int sel;
	cout << "1. Add new staff" << endl;
	cout << "2. Edit information of staff by id" << endl;
	cout << "3. Delete staff by id" << endl;
	cout << "4. Find staff by name" << endl;
	cout << "5. Show all information" << endl;
	cout << "6. Open the file" << endl;
	cout << "7. Save to file" << endl;
	cin >> sel;
	return sel;
}

bool Processing(CStaffList* List)
{
	string name;
	int id;
	switch (MenuShow())
	{
	case 1:
		List->AddStaff(List->InfoStaff());
		break;
	case 2:
		cout << "Enter ID";
		cin >> id;
		List->ModifyByID(id);
		break;
	case 3:
		cout << "Enter ID";
		cin >> id;
		List->RemoveByID(id);
		break;
	case 4:
		cout << "Enter Name";
		cin.ignore();
		std::getline(std::cin, name);
		List->SearchByName(name);
		break;
	case 5:
		List->ShowList();
		break;
	case 0:
		return false;
	}
	return true;
}

int main()
{
	CStaffList List;
	while (Processing(&List))
	{
	}
	
	system("PAUSE");
	return 0;
}
