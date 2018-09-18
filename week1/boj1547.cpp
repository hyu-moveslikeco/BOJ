/*
problem : 1526
09.18.2018
*/
#include <iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	
	int hascup = 1;

	while ( m > 0 )
	{
		int x, y;
		cin >> x >> y;
		
		if ( x == hascup )
			hascup = y;
		else if ( y == hascup )
			hascup = x;

		m--;
	}
	cout << hascup;
	return 0;
}