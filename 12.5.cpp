#include <iostream>
using namespace std;
double Fact2(int N)
{
	double F = 1;
	int i;
	for (i = 1; i <= N; i++)
		if ((N % 2 == 1) && (i % 2 == 1))
			F = F * i;
		else if ((N % 2 == 1) && (i % 2 == 0))
			F = F * i;
	return F;
}
int main()
{
	int a;
	cin >> a;
	cout << Fact2(a);
	return 0;
}