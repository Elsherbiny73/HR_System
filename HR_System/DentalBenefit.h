#pragma once
#include "Benefit.h"
#include<string>
class DentalBenefit :
    public Benefit
{
    double cost, dis;
    string info;
    double percent = 0.2;
    void set_details();
    double CalculateBenefit();
};

