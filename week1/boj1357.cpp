#include <iostream>
using namespace std;

int reverse(int a)
{
	int result = 0;

	while ( a > 0 )
	{
		result *= 10;
		result += a % 10;
		a /= 10;
	}
	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << reverse(reverse(a) + reverse(b)) << endl;
	return 0;
}