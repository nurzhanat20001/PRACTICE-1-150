#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a[100];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < 5; i+=2) {
		a[i] = 0;
	}
	for (int i = 0; i < 5; i++) {
		cout<< a[i];
	}
	return 0;
}