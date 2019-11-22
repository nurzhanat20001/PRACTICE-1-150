#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x = 1;
	double a = 0.1;
	double b = 0.2;
	cout << pow((pow(x,2)+b),(1/5))-((pow(b,2)*pow((sin(x+a)),3))/x) << endl;
	return 0;
}