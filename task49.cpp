#include <iostream>
using namespace std;
int main()
{
	int a[4];
	int m = 0;
	bool s = false;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			if (a[i] > m) {
				m = a[i];
				s = true;
			}
		}
	}if (s == true) {
		cout << m;
	}
	else {
		cout << "not found";
	}
	
	return 0;
}