#include "Salariedemployee.h"
void Salariedemployee::get_details() {
	Employee::get_details();
	cout << " |         | " << salary << " | " << endl;
	cout << "----------------------------------------------------------------------" << endl;
	de.get_details();
	cout << "----------------------------------------------------------------------" << endl;
}
void Salariedemployee::set_details() {
	Employee::set_details();
	cout << " | enter the salary : ";
	cin >> salary;
	de.set_details();
}