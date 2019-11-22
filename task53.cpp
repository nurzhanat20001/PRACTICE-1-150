#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (x + y == 10 && x % 2 == 0) {
		cout << x + y << endl;
	}
	else {
		cout << x * y << endl;
	}
}