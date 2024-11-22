#pragma once
#include "Employee.h"
#include"Department.h"
class Salariedemployee :
    public Employee
{
public:
    Department de;
    double salary;
    void get_details();
    void set_details();
};


