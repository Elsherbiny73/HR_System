#pragma once
#include "Employee.h"
#include"Department.h"
class CommissionEmployee :
    public Employee
{
protected:
    double target, rate;
    Department de;
public:
    void set_details();
    void get_details();
};

