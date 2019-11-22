#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	int m = 0;
	cin >> x >> y >> z;
	if (x > y &&  z> y) {
		m= x+z;
	}
	else if (y > x && z> x) {
		m = y+z;
	}
	else if (x > z && y > z) {
		m= x+y;
	}
	cout << m;
	return 0;
}