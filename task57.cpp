﻿// given date is valid or not. 
#include<iostream> 
using namespace std;

const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1800;

bool isLeap(int year)
{
	return (((year % 4 == 0) &&
		(year % 100 != 0)) ||
		(year % 400 == 0));
}

bool isValidDate(int d, int m, int y)
{
	if (y > MAX_VALID_YR ||
		y < MIN_VALID_YR)
		return false;
	if (m < 1 || m > 12)
		return false;
	if (d < 1 || d > 31)
		return false;
	if (m == 2)
	{
		if (isLeap(y))
			return (d <= 29);
		else
			return (d <= 28);
	}

	if (m == 4 || m == 6 ||
		m == 9 || m == 11)
		return (d <= 30);

	return true;
}

int main(void)
{
	isValidDate(10, 12, 2000) ? cout << "Yes\n" :
		cout << "No\n";

	isValidDate(31, 11, 2000) ? cout << "Yes\n" :
		cout << "No\n";
}
	
