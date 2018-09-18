/*
problem : 1598
09.18.2018
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int result = 0;
	result += (a-1) / 4 - (b-1) / 4;
	if ( result < 0 )
		result *= -1;


	if ( (a-1) % 4 > (b-1) % 4 )
	{
		result += (a-1) % 4 - (b-1) % 4;
	}
	else
		result += (b-1) % 4 - (a-1) % 4;

	cout << result;
	return 0;
}