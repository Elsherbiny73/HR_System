#include "Hourlyemployee.h"
void Hourlyemployee::get_details() {
	Employee::get_details();
	cout << hours_worked << " | " << hours_worked * rate << " | " << endl;
	cout << "----------------------------------------------------------------------" << endl;
	de.get_details();
	cout << "----------------------------------------------------------------------" << endl;
	/*cout << "the worked hours is : " << hours_worked << endl
		<< "the salary is : " << hours_worked * rate << endl;*/
}
void Hourlyemployee::set_details() {
	Employee::set_details();
	cout << " | enter the worked hours : ";
	cin >> hours_worked;
	cout << " | enter the rate : ";
	cin >> rate;
	de.set_details();
}
