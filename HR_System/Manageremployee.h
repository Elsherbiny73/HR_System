#pragma once
#include "Salariedemployee.h"
class Manageremployee :
    public Salariedemployee
{
private:
    double bonus;
    double salary;
    Department dr;
public:
    void get_details();
    void set_details();
};

