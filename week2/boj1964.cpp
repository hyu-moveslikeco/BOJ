/*
problem : 1934
09.29.2018
*/
#include<iostream>
#include<string>
#include<iostream>
#include<stdio.h>
using namespace std;

int gcd(int a, int b)
{
	while ( b != 0 )
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int n;
	scanf("%d", &n);
	while ( n-- )
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if ( a <= b )
		{
			int temp = b;
			b = a;
			a = temp;
		}


		printf("%d\n", lcm(a, b));

	}
}