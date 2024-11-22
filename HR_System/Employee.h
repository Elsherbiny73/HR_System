#pragma once
#include<iostream>
#include"Benefit.h"
#include<string>
//#include"HealthBenefit.h"
//#include"DentalBenefit.h"
using namespace std;
class Employee
{
protected:
	int employeeid;
	string name, phone, email, jobtitle;
	/*HealthBenefit beh;
	DentalBenefit bed;*/
public:
	int counter = 0;
	Benefit** ben_ptr = new Benefit * [counter];
	virtual void set_details();
	virtual void get_details();
	string return_name();
	string return_phone();
	int return_id();
};