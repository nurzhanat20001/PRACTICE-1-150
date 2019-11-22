#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,y,result;
	cin >> x >> y;
	if (y > 0) {
		if ((x - sqrt(y)) > 0) {
			result = sqrt(x - sqrt(y));
		}
	}
	cout <<result ;
	return 0;
}