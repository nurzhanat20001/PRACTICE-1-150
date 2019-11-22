#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x <-100 || x > 100) {
		x=0;
	}else {
		x = x + 1;
	}
	cout << x;
	return 0;
}