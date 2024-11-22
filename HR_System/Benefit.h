#pragma once
#include<iostream>
using namespace std;
class Benefit
{
protected:
	double cost, dis, percent;
	string info;
public:
	virtual void set_details();
	virtual double CalculateBenefit() = 0;
};