#include <iostream>
using namespace std;
int Quarter(double x, double y)
{
	int Q;
	if (x > 0)
	{
		if (y > 0)
			return 1;
		else if (y < 0)
			return 4;
	}
	else if (x < 0)
	{
		if (y > 0)
			return 2;
		else if (y < 0)
			return 3;
	}
}
int main()
{
	int x, y, i;
	for (i = 1; i <= 3; i++)
	{
		cin >> x >> y;
		cout << Quarter(x, y);
	}
	return 0;
}