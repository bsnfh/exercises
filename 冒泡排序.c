#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int input = 0;
	int num = 0;
	scanf_s("%d", &num);
	int* p = (int*)malloc(num * sizeof(int));
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &input);
		p[i] = input;
		//printf("%d ", p[i]);
	}
	//����������������

	for (int m = 1; m < num; m++)
	{
		int j = 0;
		for (int k = 0; k < num - m; k++)
		{
			if (p[j] < p[j + 1])
			{
				int zhongjian = 0;
				zhongjian = p[j];
				p[j] = p[j + 1];
				p[j + 1] = zhongjian;
			}
			j++;
		}
	}
	//ð������ĺ��Ĳ���

	for (int n = 0; n < num; n++)
    //for(int n = num - 1; n >= 0; n--) ������������
	{
		printf("%d ", p[n]);
	}
	//�������
	free(p);

	system("pause");
	return 0;
}
