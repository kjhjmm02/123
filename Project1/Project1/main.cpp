#include "FulltimeStaff.h";
#include "HourslyStaff.h";
#include "PartTimeStaff.h";
#include "StaffList.h";

int main()
{
	CHourslyStaff A2(10, "B", 17, "01289999", 3, 10);
	CFulltimeStaff A3(10, "ABC", 17, "01289999", 3);
	CPartTimeStaff A4(10, "A", 17, "01289999", 3);

	CStaff *P = &A2;
	CStaffList L;
	L.AddStaff(P);
	P = &A3;
	L.AddStaff(P);
	P = &A4;
	L.AddStaff(P);
	L.ShowList();
	L.SearchByName("A");
	system("PAUSE");
	return 0;
}