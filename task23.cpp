#include <iostream>
using namespace std;
int main()
{
	double x,a,y,k;
	cin >> x>>a>>y>>k;
	double b = (a * y) / x;
	double d = (x * k) / a;
	cout <<b<<" "<<d << endl;
	return 0;
}