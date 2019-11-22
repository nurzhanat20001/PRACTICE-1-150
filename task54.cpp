#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x < 5 && y < 5) {
		cout << "Yes";

	}
	else  if (x < 5 && z < 5) {
		cout << "Yes";

	}

	else if (z < 5 && y < 5) {
		cout << "Yes";

	}
	else {
		cout << "No";
	}

	return 0;
}