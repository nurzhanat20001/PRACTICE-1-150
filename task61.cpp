#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, n1, n2, n3, n4;
	cin >> n;
	n3 = n % 10;
	n1 = n / 100;
	n2 = n / 10 % 10;
	n4 = n / 10 / 10 % 10;
	if (n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4) {
		cout << "yes";
	}
	else { cout << "no"; }
	cout  << endl;
	return 0;
}