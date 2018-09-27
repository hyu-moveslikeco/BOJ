/*
problem : 1748
09.27.2018
*/
#include<iostream>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	/*
	1~9 : 1	-> 1 / 10 하면 0  9
	10~99 : 2 두번하면 0     90
	100 ~999 : 3세번하면 0   900
	1000 ~9999 : 4번하면 0   9000
	*/

	int n;
	int i = 0;
	cin >> n;
	int num = n;

	int result = 0;
	while ( 1 )
	{
		i++;
		if ( num / 10 == 0 )
			break;
		num /= 10;
	}

	for ( int j = 1; j < i; j++ )
	{
		int num = 9;
		int check = j;
		while ( check - 1 > 0 )
		{
			num *= 10;
			check--;
		}
		result += num*j;
	}
	int ten = 1;
	int c = i;
	while ( --c )
	{
		ten *= 10;
	}
	result += ( n - ten + 1 ) * i;
	cout << result << endl;
}