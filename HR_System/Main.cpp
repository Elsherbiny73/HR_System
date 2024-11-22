#include<conio.h>
#include<iostream>
#include"HRsystem.h"
//#include"Employee.h"
//#include"Hourlyemployee.h"
using namespace std;
int main()
{
	HRsystem hr;
	cout << "                        welcome to hrsystem " << endl;
	cout << "           Employee             " << "              Benefit   " << endl;
	cout << "--------------------------------" << "-----------------------------------------" << endl
		<< "| Add employee [1]-------------| " << " | Choose the kind of benefit [a]------|" << endl
		<< "| Display employee [2]---------| " << " | Display the name of the employee [b]|" << endl
		<< "| Delete an employee [3]-------| " << " | Choose the employee [c]-------------|" << endl
		<< "| Edit the information [4]-----| " << " | Add the the benefit [d]-------------|" << endl
		<< "| Search for an employee [5]---| " << " ---------------------------------------" << endl
		<< "| Exit [0]---------------------| " << endl
		<< "--------------------------------  " << endl;
	string kind;
	while (true) {
		cout << "enter your choice : ";
		char choice;
		//cin >> choice;
		choice = _getch();
		cout << endl;
		switch (choice) {
		case '1':
			hr.add_employee();
			break;
		case '2':
			hr.display_employee();
			break;
		case '3':
			hr.delete_employee();
			break;
		case '4':
			hr.edit_employee();
			break;
		case '5':
			hr.search_employee();
			break;
		case '0':
			return 0;
		case'a':
			cout << "enter the kind of benefit : ";
			cin >> kind;
		case'b':
			hr.Display_Name();
		case'c':
			//hr.choose_employee();
		}
	}

}