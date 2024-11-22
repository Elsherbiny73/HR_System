#include "Employee.h"
void Employee::set_details()
{
	cout << " | enter the name : ";
	getline(cin, name);
	cout << " | enter the employee id : ";
	cin >> employeeid;
	cout << " | enter the email : ";
	cin >> email;
	cout << " | enter the phone number : ";
	cin >> phone;
	cout << " | enter the job title : ";
	cin >> jobtitle;
	/*beh.set_details();
	bed.set_details();*/
	counter++;
}
void Employee::get_details() {
	/*cout << "the name is : " << name << endl
		<< "the employee id : " << employeeid << endl
		<< "the email is : " << email << endl
		<< "the phone number is : " << phone << endl
		<< "the job title is : " << jobtitle << endl;*/
	cout << "| " << name << " | " << employeeid << " | " << email << " | "
		<< phone << " | " << jobtitle << " | ";


}
string Employee::return_name() {
	return name;
}
string Employee::return_phone() {
	return phone;
}
int Employee::return_id() {
	return employeeid;
}