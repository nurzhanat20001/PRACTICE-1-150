#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x > 3) {
		x = x + 10;
	}else {
		x = x - 10;
	}
	cout <<x;
	return 0;
}