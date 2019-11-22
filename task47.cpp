#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	int max=0;
	cin >> x >> y >> z;

	if (x > y && x>z) {
		max=x;
	}else if (y > x && y > z) {
		max = y;
	}
	else if (z > x && z > y) {
		max = z;
	}
	cout << max;
	return 0;
}