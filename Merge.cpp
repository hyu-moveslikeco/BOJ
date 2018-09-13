//2017030173_ÀÌÇö¹Î_12525

#include<stdio.h>

void Merge( int start, int middle, int end, int* arr )
{
	int left_start= start, right_start = middle+1,arr_copy[100000];
	int i = 0;
	while ( left_start < middle + 1 && right_start < end + 1 )
	{
		if ( arr[left_start] > arr[right_start] )
		{
			arr_copy[i] = arr[left_start];
			left_start++;
			i++;
		}
		else
		{
			arr_copy[i] = arr[right_start];
			right_start++;
			i++;
		}
	}
	if ( left_start != middle + 1 )
	{
		for ( int j = left_start; j < middle + 1; j++ )
		{
			arr_copy[i] = arr[j];
			i++;
		}
	}
	if ( right_start != middle + 1 )
	{
		for ( int j = right_start; j < end + 1; j++ )
		{
			arr_copy[i] = arr[j];
			i++;
		}
	}



	for ( int k = 0; k < i; k++ )
	{
		arr[start + k] = arr_copy[k];
	}
}

void Mergesort(int start, int end, int* arr )
{
	if ( start < end )
	{
		Mergesort(start, ( start + end ) / 2 , arr);
		Mergesort(( start + end ) / 2 + 1, end, arr);
		Merge(start, ( start + end ) / 2, end, arr);
	}

}

int main()
{
	int i,n, num[100000];
	scanf("%d", &n);

	for ( i = 0; i < n; i++ )
	{
		scanf("%d", &num[i]);
	}

	Mergesort(0, n - 1, num);

	for ( i = 0; i < n; i++ )
	{
		printf("%d\n", num[i]);
	}
	return 0;
}