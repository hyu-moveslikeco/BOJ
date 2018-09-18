/*
problem : 1526
09.18.2018
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[10] = { 0 };

	for ( int i = n; i > 0; i-- )
	{
		int num = i;
		for ( int j = 0; j < 10; j++ )
		{
			arr[j] = 0;
		}

		while ( num > 0 )
		{
			arr[num % 10]++;
			num /= 10;
		}

		int flag = 0;
		for ( int j = 0; j < 10; j++ )
		{
			if ( arr[j] > 0 && ( j != 4 && j != 7 ) )
			{
				flag = 1;
				break;
			}
		
		}

		if ( flag )
			continue;
		cout << i << endl;
		break;
	}
	return 0;
}