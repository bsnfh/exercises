#include <stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	int book[11] = { 0 };
	int input = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &input);
		book[input]++;

	}
	for (int j = 0; j < 11; j++)
	{
		for (int k = 0; k < book[j]; k++)
		{
			printf("%d ", j);
		}
	}
	system("pause");
	return 0;
}
