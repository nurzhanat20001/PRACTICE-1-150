#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,m, m6,m5,m4,m3, m2, m1;
	int k;
	cin >> n >> m;
	k = n * 1000 + m;
	m6 = k  % 10;
	m5 = k  / 10 % 10;
	m4 = k  / 10 / 10 % 10;
	m3 = k / 10 / 10 / 10 % 10;
	m2 = k / 10 / 10 / 10 / 10 % 10;
	m1 = k / 10 / 10 / 10 / 10 / 10 % 10;

	cout << m1 << m2 << m4 << m5;

	return 0;
}