#pragma once
#include "Benefit.h"
#include<string>
class HealthBenefit :
    public Benefit
{
public:
    double cost, dis;
    string info;
    double percent = 0.2;
    void set_details();
    double CalculateBenefit();
};

