#include "FulltimeStaff.h";
#include "HourslyStaff.h";
#include "PartTimeStaff.h";
#include "StaffList.h";

int main()
{
	CHourslyStaff *A2 = new CHourslyStaff(10, "B", 17, "01289999", 3, 10);
	CFulltimeStaff *A3= new CFulltimeStaff(11, "ABC", 17, "01289999", 3);
	CPartTimeStaff *A4= new CPartTimeStaff(12, "A", 17, "01289999", 3);

	CStaff *P = A2;
	CStaffList L;
	L.AddStaff(P);
	P = A3;
	L.AddStaff(P);
	P = A4;
	L.AddStaff(P);
	L.ShowList();
	cout << "==================" << endl;
	L.SearchByName("A");
	cout << "==================" << endl;
	//L.RemoveByID(12);
	L.ModifyByID(11);
	L.ShowList();
	system("PAUSE");
	return 0;
}