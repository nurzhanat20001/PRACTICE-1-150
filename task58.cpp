#include <iostream>
using namespace std;
bool dateExist(int d, int m, int y) {
	bool exist=false;
	if ((d < 30 && d>0) && (m == 4 || m == 6 || m == 9 || m == 11)) {
		exist = true;
	}
	else if ((d < 31 && d>0) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)) {
		exist = true;
	}
	else if (m == 2) {
		if (y % 400 == 0) {
			if (d < 28) {
				exist = true;
			}
		}
		else if (d < 29) {
			exist = true;
		}
	}
	return exist;
}
int main() {
	int d1, m1, y1,d2,m2,y2;
	cin >> d1 >> m1 >> y1>>d2>>m2>>y2;
	dateExist(d1, m1, y1);
	dateExist(d2, m2, y2);
	if (((dateExist(d1, m1, y1) == true) && (dateExist(d2, m2, y2)) == true)) {
		if ((y2 > y1) ||(y1==y2 && m2>m1) || (y1 == y2 && m2 == m1 && d2>d1)) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}
	}
	else {
		cout << "Dates are not correct";
	}
	return 0;
}