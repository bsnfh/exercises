#include<stdio.h>
#include<stdlib.h>
int main()
{
	void swap(int* in, int* out);
	int p[10] = { 0 };
	int i, j;
	for (int k = 0; k < 10; k++)
	{
		scanf_s("%d", &p[k]);
	}

	for (i = 0; i < 10; i++)
	{
		int min = i;
		for (j = i+1; j < 10; j++)//j加1是因为已经把小标0赋给min了，下面可以直接比较
		{
			if (p[min] > p[j])
			{
				min = j;
			}
		}
		swap(&p[min], &p[i]);
	}

	for (int m = 0; m < 10; m++)
	{
		printf("%d ", p[m]);
	}
	return 0;
}

void swap(int* in, int *out)
{
	int temp;
	temp = *in;
	*in = *out;
	*out = temp;
}




