#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a == b || a == c || c == b) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}