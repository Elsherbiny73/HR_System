#include "Department.h"
void Department::set_details() {
	cout << " | enter the department name : ";
	cin >> depart_name;
	cout << " | enter the id department : ";
	cin >> id_depart;
}
void Department::get_details() {
	cout << " |  " << depart_name << "  |  " << id_depart << "  | " << endl;
	/*
	cout << "the department name is : " << depart_name << endl;
	cout << "the department id is : " << id_depart << endl;*/
}