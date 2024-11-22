#include "DentalBenefit.h"
void DentalBenefit::set_details()
{
	cout << " | enter the infomation : ";
	getline(cin, info);
	cout << " | enter the cose : ";
	cin >> cost;
}

double DentalBenefit::CalculateBenefit()
{
	dis = cost * percent;
	return dis;
}
