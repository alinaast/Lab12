#include <iostream>
using namespace std;
double RingS(double R1, double R2)
{
	int pi = 3.14;
	double s;
	s = pi * (R1 * R1 - R2 * R2);
	return s;
}
int main()
{
	double a, b;
	cin >> a >> b;
	cout << RingS(a, b);
	return 0;
}
 