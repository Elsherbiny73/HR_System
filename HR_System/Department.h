#pragma once
#include "Employee.h"
class Department :
    public Employee
{
private:
    int id_depart;
    string depart_name;
public:
    void get_details();
    void set_details();
};

