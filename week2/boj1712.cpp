/*
problem : 1712
09.27.2018
*/
#include<iostream>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	long long int A, B, C;
	cin >> A >> B >> C;

	int i = 1;

	if ( B >= C )
	{
		cout << -1;
		return 0;
	}
	cout << A/(C-B) + 1 << endl;
	return 0;
}