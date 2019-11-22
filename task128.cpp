#include <iostream>

using namespace std;

int main() {

int maxValue;
cin >> maxValue;
int sum1;
int sum2;

for (int i=1; i <= maxValue; i++)

{
sum1 = 0;

sum2 = 0;

for (int j = 1; j < i; j++)

{



if (sum1%j == 0)

{


sum2 = sum2 + j;

}

}



if (i == sum2)

{

cout << (i, sum1);

}
return 0;

}