#include<stdio.h>

int main()
{
	void maopao(int arr[], int len);
	

	int n = 0;
	scanf_s("%d", &n);
	int book[200] = { 0 };
	
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &book[i]);
	}
	
	maopao(book, n);

	for (int m = 0; m < n; m++)
	{
		printf("%d ", book[m]);
	}

	return 0;
}

void maopao(int arr[], int len)
{
	int temp = 0;
	for (int j = 1; j < len; j++)
	{

		for (int k = 0; k < len - j; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
}


