#include <stdio.h>

int main()
{
	int i = 2;
	int input = 0;
	int num = 0;
	int cnt = 1;

	for (input = 1; input < 1000; input++)
	{
		i = 2;
		cnt = 1;
		while (i < input)
		{
			num = input % i;
			if (num == 0)
			{
				cnt = 0;
				break;
			}
			i++;
		}
		//判断是否是素数，如果是，直接排除
		int num2 = 0, num3 = input / 2, sum = 0, all = 1;
		int save[1000] = { 0 };
		if (cnt == 0)
		{
			for (int chu = 2; chu < num3; chu++)
			{
				num2 = input % chu;
				num3 = input / chu;
				if (num2 == 0)
				{
					sum = chu + num3;
					all += sum;
					save[chu]++;
					save[num3]++;
				}

			}
			//筛选“完数”
			if (all == input)
			{
				printf("%d: 1 ", input);
				for (int i = 0; i < 1000; i++)
				{
					for (int k = 0; k < save[i]; k++)
					{
						printf("%d ", i);
					}
				}
				printf("\n");
			}
			//利用桶排序输出
		}

	}
	return 0;
}
