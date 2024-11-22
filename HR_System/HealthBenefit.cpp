#include "HealthBenefit.h"

void HealthBenefit::set_details()
{
	cout << " | enter the infomation : ";
	getline(cin, info);
	cout << " | enter the cost : ";
	cin >> cost;
}

double HealthBenefit::CalculateBenefit()
{
	dis = cost * percent;
	return dis;
}
