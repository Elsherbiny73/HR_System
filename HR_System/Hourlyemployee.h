#pragma once
#include "Employee.h"
#include"Department.h"
class Hourlyemployee :
    public Employee
{
private:
    double hours_worked;
    double rate;
    Department de;
public:
    void get_details();
    void set_details();
};
