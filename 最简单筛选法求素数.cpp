#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int arr[101] = { 0 };
	int j, k;
	arr[1] = 1;
	for (j = 1; j <= 100; j++)
	{
		if (arr[j] != 1)
		{
			for (k = 2; k * j <= 100; k++)
			{
				arr[k * j] = 1;
			}
		}
	}
	
	for (int i = 1; i <= 100; i++)
	{
		if (arr[i] != 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}