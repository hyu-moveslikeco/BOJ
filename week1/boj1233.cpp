#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int result[100] = { 0 };
	for ( int i = 1; i <= a; i++ )
	{
		for ( int j = 1; j <= b; j++ )
		{
			for ( int k = 1; k <= c; k++ )
			{
				result[i + j + k]++;
			}
		}
	}


	int max = 0;
	int index = 0;
	for ( int i = 0; i<100; i++ )
	{
		if ( result[i] > max )
		{
			index = i;
			max = result[i];
		}

	}
	cout << index << endl;
	return 0;
}