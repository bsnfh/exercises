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
	//记录并输出数字的位数
	int cntdaiti = 0;
	cntdaiti = cnt - 1;
	//继承计数器的值，为下面正序和逆序的输出做准备
	int cnt2 = 0;
	int i = 0;
	int* p = (int*)malloc(cnt * sizeof(int));
	//利用位数进行动态内存分配
	while (cnt2 < cnt)
	{
		i = input2 % 10;
		p[cnt2] = i;
		input2 /= 10;
		cnt2++;
	}
	//读入每一位的数字（从小到大写入）
	while (cntdaiti >= 0)
	{
		printf("%d ", p[cntdaiti]);
		cntdaiti--;
	}
	printf("\n");
	//正序输出
	for (int cnt3 = 0; cnt3 < cnt; cnt3++)
	{
		printf("%d ", p[cnt3]);
	}
	printf("\n"); 
	//逆序输出
	
	//释放内存	
	return 0;
}

