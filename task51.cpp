#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c || b + c == a || c + a == b) {
		cout << "Yes";
	}	
}