#include <stdio.h>
#include<stdlib.h>

int main()
{
	int input = 0;
	int cnt = 1;
	int input2 = 0;
	scanf_s("%d", &input);
	input2 = input;
	if (input >= 10)
	{
		do
		{
			input /= 10;
			cnt++;
		} while (input > 10);
	}
	printf("%d\n", cnt);
	//��¼��������ֵ�λ��
	int cntdaiti = 0;
	cntdaiti = cnt - 1;
	//�̳м�������ֵ��Ϊ�������������������׼��
	int cnt2 = 0;
	int i = 0;
	int* p = (int*)malloc(cnt * sizeof(int));
	//����λ�����ж�̬�ڴ����
	while (cnt2 < cnt)
	{
		i = input2 % 10;
		p[cnt2] = i;
		input2 /= 10;
		cnt2++;
	}
	//����ÿһλ�����֣���С����д�룩
	while (cntdaiti >= 0)
	{
		printf("%d ", p[cntdaiti]);
		cntdaiti--;
	}
	printf("\n");
	//�������
	for (int cnt3 = 0; cnt3 < cnt; cnt3++)
	{
		printf("%d ", p[cnt3]);
	}
	printf("\n"); 
	//�������
	
	//�ͷ��ڴ�	
	return 0;
}

