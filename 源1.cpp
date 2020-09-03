#include<iostream>
#define AREA(a,b) a*b

using namespace std;
int main()
{
	int a = 3;
	int b = 4;
	int x=AREA(a, b);
	int c = 12 / (AREA(a, b));
	int d = AREA(a + b, a + b);
	cout << d << endl;
	return 0;
}


