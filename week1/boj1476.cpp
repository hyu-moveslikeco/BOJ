/*
problem : 1476
09.18.2018
*/
#include <iostream>
using namespace std;

int main()
{
	int result = 1;
	int e, s, m;
	cin >> e >> s >> m;

	int check_e=1, check_s=1, check_m = 1;

	while ( check_e != e || check_s != s || check_m != m )
	{
		result++;

		check_e = ( check_e + 1 ) % 16;
		if ( !check_e ) check_e++;

		check_s = ( check_s + 1 ) % 29;
		if ( !check_s ) check_s++;

		check_m = ( check_m + 1 ) % 20;
		if ( !check_m ) check_m++;

	}

	cout << result << endl;
	return 0;
}