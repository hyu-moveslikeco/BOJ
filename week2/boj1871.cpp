/*
problem : 1871
09.29.2018
*/
#include<iostream>
#include<string>
#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while ( n-- )
	{
		string a;
		string first, second;
		int seint, fiint = 0;
		cin >> a;
		first = a.substr(0, 3);
		second = a.substr(4, a.size());

		seint = atoi(second.c_str());

		fiint = ( first[0] - 'A' ) * 26 * 26 + ( first[1] - 'A' ) * 26 + first[2] - 'A';

		int result = fiint - seint;

		if ( result <= 100 && result >= -100 )
			cout << "nice" << endl;
		else
		{
			cout << "not nice" << endl;
		}
	}
}