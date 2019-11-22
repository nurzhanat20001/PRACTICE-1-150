#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1 && n == 2 && n == 12) {
		cout << "Winter";
	}
	if (n >= 3 && n<=5) {
		cout << "Spring";
	}
	if (n >= 6 && n<=8) {
		cout << "Summer";
	}
	if (n >= 9 && n<=11) {
		cout << "Autumn";
	}
	return 0;
}