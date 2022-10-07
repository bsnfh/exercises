#include<stdio.h>

int main()
{
	
	int a[3][4];
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	d = a[0][0];
	for (b = 0; b < 3; b++)
	{
		for (c = 0; c < 4; c++)
		{
			if (a[b][c] > d)
			{
				d = a[b][c];
				e = b;
				f = c;
			}
		}
	}
	
	printf("%d %d %d\n", d, e, f);
	
	
	return 0;
}