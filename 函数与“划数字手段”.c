#include<stdio.h>
int main()
{
	int hua(int input);
	int begin = 0;
	int last = 0;
	int a1 = 0;
	int a2 = 0;
	int result = 0;
	scanf_s("%d %d", &begin, &last);
	a1=hua(begin);
	a2=hua(last);
	result = a2 - a1;
	if ((result / 60) < 10 && (result % 60) < 10)
	{
		printf("0%d:0%d", result / 60, result % 60);
	}
	else if((result / 60) < 10 && (result % 60) > 10)
	{
		printf("0%d:%d", result / 60, result % 60);
	}
	else if ((result / 60) > 10 && (result % 60) < 10)
	{
		printf("%d:0%d", result / 60, result % 60);
	}
	else
	{
		printf("%d:%d", result / 60, result % 60);
	}
	return 0;
}

int hua(int input)
{
	int i, j, a, b = 0;
	int sum = 0;
	i = input / 10;
	j = i / 10;
	a = input % 10;
	b = i % 10;
	sum = j * 60 + b * 10 + a;
	return sum;
}
