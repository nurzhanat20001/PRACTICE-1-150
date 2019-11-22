#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int t = a, m = b,n=c;
	a = t + m;
	b = n - t;
	c = t + m + n;
	cout << a << " " << b <<" "<<c<< endl;
	return 0;
}