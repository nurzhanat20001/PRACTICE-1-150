#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2));
	double s = (a * b) / 2.0;
	double p = a + b + c;
	cout << s<<" "<<p<<" "<<c<< endl;
	return 0;
}