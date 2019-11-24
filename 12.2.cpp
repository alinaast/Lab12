#include <iostream>
using namespace std;
int Sign(int x)
{
	return x < 0 ? -1 : ((x == 0) ? 0 : 1);
}
int main()
{
	int a, b, s;
	cin >> a >> b;
	s = Sign(a) + Sign(b);
	cout  << s;
	return 0;
}
