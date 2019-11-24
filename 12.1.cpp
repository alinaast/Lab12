#include <iostream>
using namespace std;
int PowerA3(int A, int B)
{
	B = A * A * A;
}
int main()
{
	int i, a, b;
	for (i = 1; i <= 5; i++) {
		cin >> a;
		cout << PowerA3(a, b);
	}
	return 0;
}