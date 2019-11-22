#include <iostream>
using namespace std;
int main()
{
	double t,s;
	cin >> t>>s;
	double v = (s * 1000) / (t * 60);
	cout << v << endl;
	return 0;
}