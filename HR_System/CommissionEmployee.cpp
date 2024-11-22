#include "CommissionEmployee.h"
void CommissionEmployee::set_details()
{
	Employee::set_details();
	cout << " | enter the target : ";
	cin >> target;
	cout << " | enter the rate : ";
	cin >> rate;
	de.set_details();
}

void CommissionEmployee::get_details()
{
	Employee::get_details();
	cout << " |         | " << target * rate << " | " << endl;
	cout << "----------------------------------------------------------------------" << endl;
	de.get_details();
	cout << "----------------------------------------------------------------------" << endl;
	/*cout << "the salary is : " << target * rate << endl;*/
}

