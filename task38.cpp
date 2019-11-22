#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (abs(x-y)==100) {
		cout << "Yes";
	}else {
		cout << "No";
	}
	return 0;
}