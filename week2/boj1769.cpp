/*
problem : 1769
09.29.2018
*/
#include<iostream>
#include<string>
#include<iostream>
using namespace std;


int main()
{
	string n;
	cin >> n;
	int result = 0;
	long long int  tempnum = 0;

	int flag = 0;
	if ( n.size() == 1 )
	{
		if ( n[0] == '3' || n[0] == '6' || n[0] == '9' )
			flag = 1;
	}
	else
	{
		while ( 1 )
		{
			tempnum = 0;
			result++;
			for ( int i = 0; i < n.size(); i++ )
			{
				tempnum += n[i] - '0';
			}
			n = to_string(tempnum);

			if ( n.size() == 1 )
			{
				if ( n[0] == '3' || n[0] == '6' || n[0] == '9' )
					flag = 1;
				break;
			}

		}

	}
	cout << result << endl;
	if ( flag )
		cout << "YES";
	else
		cout << "NO";
}