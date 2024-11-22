#pragma once
#include<conio.h>
#include<iostream>
using namespace std;
#include"Employee.h"
#include"Hourlyemployee.h"
#include"CommissionEmployee.h"
#include"Salariedemployee.h"
#include"Manageremployee.h"
#include"Department.h"
#include"Benefit.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"
class HRsystem
{
public:
	long long size;
	Employee** emp_ptr = new Employee * [size];
	Employee** emp_ptr_name = new Employee * [size];
	//Benefit** ben_ptr = new Benefit * [size];
	int next = 0;
	char type;
	char c = 'y';
	void add_employee();
	void display_employee();
	void search_employee();
	void delete_employee();
	void edit_employee();
	void choose_employee();
	HRsystem();
	//string set_name[size];
	//string* set_name = new string[size];
	void Display_Name();

};

