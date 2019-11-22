#include <iostream>
using namespace std;
int main()
{
	double n,p,s;
	cin >> n>>p>>s;
	double a = (((2*s + 3 * (n - 1)) * n) / 2)+s*(p/100);
	cout << a << endl;
	return 0;
}