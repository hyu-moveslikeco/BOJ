//problem : 1225
//09.14.2018

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int sum = 0;

	for ( int i = 0; i < a.size(); i++ )
	{
		for ( int j = 0; j < b.size(); j++ )
		{
			sum += ( a[i] - 48 )*( b[j] - 48 );
		}
	}
	cout << sum << endl;


	return 0;
}