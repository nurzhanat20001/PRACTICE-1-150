#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a[100];
	int n = 4;
	for (int i = 0; i < 4; i++) {
		cin >> a[i]; 
	}
	for (int i = 0; i < n / 2; i++) {
		if (a[i]!= a[n-i-1]) {
			cout << "NO";
		}
	}
	cout << "Yes";
	return 0;
}