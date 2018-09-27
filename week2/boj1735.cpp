/*
problem : 1735
09.27.2018
*/
#include<iostream>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	long long a, b, c, d;
	long long child, parent;

	cin >> a >> b >> c >> d;

	child = a*d + b*c;
	parent = b*d;

	int flag = 0;

	while ( 1 )
	{
		flag = 0;
		for ( int i = 2; i < 33333; i++ )
		{
			if ( child % i == 0 && parent % i == 0 )
			{
				child /= i;
				parent /= i;
				flag = 1;
				break;
			}
		}
		if ( flag )
			continue;
		break;
	}
	cout << child << " " << parent << endl;
}