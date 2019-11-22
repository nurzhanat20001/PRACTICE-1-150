#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, m4, m3, m2, m1;
	cin >> n;
	m4 = n % 10;
	m3 = n / 10 % 10;
	m2 = n / 10 / 10 % 10;
	m1 = n / 10 / 10 / 10 % 10;
	cout << m1 << " " << m2 << " " << m3 << " " << m4 << " ";

	if (m1 > m2 > m3 > m4) cout << "Yes";

	else cout << "No";


	return 0;
}