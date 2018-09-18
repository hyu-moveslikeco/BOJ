#include <iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	cin >> a;

	int arr[10] = { 0 };
	while ( a.size() > 0 )
	{
		arr[a[a.size() - 1] - '0']++;
		a = a.substr(0, a.size() - 1);
	}
	
	for ( int i = 9; i >= 0; i-- )
	{
		while ( arr[i] > 0 )
		{
			cout << i;
			arr[i]--;
		}
			
	}
		
	return 0;
}