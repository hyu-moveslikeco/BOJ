/*
problem : 1964
09.29.2018
*/
#include<iostream>
#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int result = 0;
	int flag = 1;
	while ( n-- )
	{
		int a;
		scanf("%d", &a);
		if ( flag )
		{
			result = a;
			flag = 0;
		}
		else
		{
			result += a - 1;
		}

	}
	cout << result << endl;
}