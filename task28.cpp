#include <iostream>
using namespace std;
int main()
{
	double s;
	int p;
	cin >> s >> p;
	for (int i = 0; i < 5; i++) {
		s = s + s * (p/100.0);
	}
	cout << s<< endl;
	return 0;
}
//or
#include <iostream>
using namespace std;
int main()
{
	double s;
	int p;
	cin >> s >> p;
	double y1 = s+s * (p / 100.0);
	double y2 =y1+ y1 * (p / 100.0);
	double y3 = y2+y2 * (p / 100.0);
	double y4 = y3+y3 * (p / 100.0);
	double y5 = y4+y4 * (p / 100.0);
	
	cout << y5<< endl;
	return 0;
}