#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	int s;
	cin >> x >> y >> z;
	if ( x % 5 == 0 && y%5==0 ) {
		s = x + y;
	} else if (z % 5 == 0 && y % 5 == 0) {
		s = z+ y;
	}else if (z % 5 == 0 && x % 5 == 0) {
		s = z + x;
	}else if (z % 5 == 0 && x % 5 == 0 && y % 5 == 0) {
		s = z + x+y;
	}
	else {
		cout << "Error";
	}
	cout << s;
	return 0;
}