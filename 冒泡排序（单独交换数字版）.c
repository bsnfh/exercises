#include<stdio.h>

int main()
{
	void huan(int* in, int* out);

	int n = 0;
	scanf_s("%d", &n);
	int book[200] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &book[i]);
		//printf("%d ", book[i]);
	}
	
	for (int j = 1; j < n; j++)
	{
		
		for (int k = 0; k < n - j; k++)
		{
			if (book[k] > book[k + 1])
			{
				huan(&book[k], &book[k + 1]);
				
			}
			
		}
	}

	for (int m = 0; m < n; m++)
	{
		printf("%d ", book[m]);

	}
	

	return 0;
}


void huan(int* in, int* out)
{
	int t;
	t = *in;
	*in = *out;
	*out = t;
}