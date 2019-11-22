#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, n1, n2, n3, a;
	cin >> n;
	n3 = n % 10;
	n1 = n / 100;
	n2 = n / 10 % 10;
	n = n3 * 100 + n2 * 10 + n1;
	cout << n1 << endl;
	return 0;
}
