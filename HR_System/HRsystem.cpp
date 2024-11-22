#include"HRsystem.h"
HRsystem::HRsystem() {
	cout << " | enter the number of the employee : ";
	cin >> size;
}
void HRsystem::add_employee() {
	while (c != 'n') {
		cout << " | enter the type of the employee [Hourly employee(0) / "
			<< "Commission employee(1) / Salaryied Employee(2) / Manager employee(3)] : ";
		//cin >> type;
		type = _getch();
		cout << endl;
		switch (type) {
		case '0':
			emp_ptr[next] = new Hourlyemployee;
			emp_ptr[next]->set_details();
			//emp_ptr[next] = new Department;
			//emp_ptr[next]->set_details();
			break;
		case '1':
			emp_ptr[next] = new CommissionEmployee;
			emp_ptr[next]->set_details();
			//emp_ptr[next] = new Department;
			//emp_ptr[next]->set_details();
			break;
		case '2':
			emp_ptr[next] = new Salariedemployee;
			emp_ptr[next]->set_details();
			//emp_ptr[next] = new Department;
			//emp_ptr[next]->set_details();
			break;
		case '3':
			emp_ptr[next] = new Manageremployee;
			emp_ptr[next]->set_details();
			//emp_ptr[next] = new Department;
			//emp_ptr[next]->set_details();
			break;
		}
		next++;
		cout << " | do you want to add more [y/n] : ";
		//cin >> c;
		c = _getch();
		cout << endl;
	}

}
void HRsystem::display_employee()
{
	cout << "----------------------------------------------------------------------" << endl
		<< "|    name    |    id    |    email    |    phone    |"
		<< "    job title    |    worked hours    |    salary   |" << endl;
	for (int i = 0; i < next; i++) {
		emp_ptr[i]->get_details();
	}
}
void HRsystem::search_employee() {
	cout << " | Are you need to search by name(1) or phone(2) or id(3) " << endl
		<< " | enter your choice : ";
	char x;
	//cin >> x;
	x = _getch();
	string search;
	int searchid;
	bool shit = false;
	switch (x) {
	case '1':
		cout << " | enter the name : ";
		cin >> search;
		int i;
		for (i = 0; i < next; i++) {
			if (search == emp_ptr[i]->return_name()) {
				shit = true;
				break;
			}
		}
		if (shit == true) {
			emp_ptr[i]->get_details();
		}
		else {
			cout << " doesn't exit " << endl;
		}
		break;
	case '2':
		cout << " | enter the phone : ";
		cin >> search;
		for (i = 0; i < next; i++) {
			if (search == emp_ptr[i]->return_phone()) {
				shit = true;
				break;
			}
		}
		if (shit == true) {
			emp_ptr[i]->get_details();
		}
		else {
			cout << " doesn't exit " << endl;
		}
		break;
	case '3':
		cout << " | enter the id : ";
		cin >> searchid;
		for (i = 0; i < next; i++) {
			if (searchid == emp_ptr[i]->return_id()) {
				shit = true;
				break;
			}
		}
		if (shit == true) {
			emp_ptr[i]->get_details();
		}
		else {
			cout << " doesn't exit " << endl;
		}
		break;
	}
}
void HRsystem::edit_employee() {
	cout << "how do you want to fine the employee you want to edit : "
		<< " by name (1) by phone (2) by id (3)";
	char x;
	//cin >> x;
	x = _getch();
	string search;
	int searchid;
	//int place;
	bool shit = false;
	switch (x) {
	case '1':
		cout << " | enter the name : ";
		cin >> search;
		int i;
		for (i = 0; i < next; i++) {
			if (search == emp_ptr[i]->return_name()) {
				//place = i;
				shit = true;
				break;
			}
		}
		if (shit == true) {
			emp_ptr[i]->set_details();
		}
		else {
			cout << " doesn't exit " << endl;
		}
		break;
	case '2':
		cout << " | enter the phone : ";
		cin >> search;
		for (i = 0; i < next; i++) {
			if (search == emp_ptr[i]->return_phone()) {
				shit = true;
				break;
			}
		}

		if (shit == true) {
			emp_ptr[i]->set_details();
		}
		else {
			cout << " doesn't exit " << endl;
		}
		break;
	case '3':
		cout << " | enter the id : ";
		cin >> searchid;
		for (i = 0; i < next; i++) {
			if (searchid == emp_ptr[i]->return_id()) {
				shit = true;
				break;
			}
		}
		if (shit == true) {
			emp_ptr[i]->set_details();
		}
		else {
			cout << " doesn't exit " << endl;
		}
		break;
	}
}
void HRsystem::delete_employee()
{
	cout << " | enter the name (1) or the id (2) or the phone (3)"
		<< " you want to delete his information : ";
	string search;
	int searchid;
	bool shit;
	char choice, choicein;
	//cin >> choice;
	choice = _getch();
	switch (choice) {
	case '1':
		cout << " | enter the name : ";
		cin >> search;
		int i;
		for (i = 0; i < next; i++) {
			if (search == emp_ptr[i]->return_name()) {
				//place = i;
				shit = true;
				break;
			}
		}
		cout << " are you sure you want to delete [y/n] : ";
		choicein = _getch();
		if (choicein == 'y') {
			if (shit == true) {
				for (int j = i - 1; j < next; j++) {
					emp_ptr[i] = emp_ptr[i + 1];
				}
				cout << "the employee has beed deleted successfully " << endl;
			}
			else {
				cout << " doesn't exit " << endl;
			}
		}
		break;
	case '2':
		cout << " | enter the phone : ";
		cin >> search;
		for (i = 0; i < next; i++) {
			if (search == emp_ptr[i]->return_phone()) {
				shit = true;
				break;
			}
		}
		cout << " are you sure you want to delete [y/n] : ";
		choicein = _getch();
		if (choicein == 'y') {
			if (shit == true) {
				for (int j = i - 1; j < next; j++) {
					emp_ptr[i] = emp_ptr[i + 1];
				}
				cout << "the employee has beed deleted successfully " << endl;
			}
			else {
				cout << " doesn't exit " << endl;
			}
		}
		break;
	case '3':
		cout << " | enter the id : ";
		cin >> searchid;
		for (i = 0; i < next; i++) {
			if (searchid == emp_ptr[i]->return_id()) {
				shit = true;
				break;
			}
		}
		cout << " are you sure you want to delete [y/n] : ";
		choicein = _getch();
		if (choicein == 'y') {
			if (shit == true) {
				for (int j = i - 1; j < next; j++) {
					emp_ptr[i] = emp_ptr[i + 1];
				}
				cout << "the employee has beed deleted successfully " << endl;
			}
			else {
				cout << " doesn't exit " << endl;
			}
		}
		break;
	}
}
void HRsystem::Display_Name() {
	for (int v = 0; v < next; v++) {
		//emp_ptr[v].display_name();
		cout << " | " << v << " | the name is : "
			<< emp_ptr[v]->return_name() << endl;
	}
}
void HRsystem::choose_employee() {

}
