#include "Manageremployee.h"
void Manageremployee::get_details()
{
	//Employee::get_details();
	Employee::get_details();
	cout << " |         | " << salary + bonus << " | " << endl;
	cout << "----------------------------------------------------------------------" << endl;
	dr.get_details();
	cout << "----------------------------------------------------------------------" << endl;
}

void Manageremployee::set_details()
{
	Employee::set_details();
	cout << " | enter the salary : ";
	cin >> salary;
	cout << " | enter the bonus : ";
	cin >> bonus;
	dr.set_details();
}

