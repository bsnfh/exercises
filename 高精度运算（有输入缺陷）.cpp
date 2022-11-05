#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<math.h>

using namespace std;
int i, j;

int main()
{
	char temp[50] = { 0 };
	short num1[50] = { 0 };
	short num2[50] = { 0 };
	short all[50] = { 0 };
	int len1 = 0, len2 = 0;
	gets_s(temp);
	
	for (i = len1 = strlen(temp) - 1, j = 0; i >= 0; j++, i--)
	{
		num1[j] = temp[i] - '0';
	}


	gets_s(temp);

	for (i = len2 = strlen(temp) - 1, j = 0; i >= 0; j++, i--)
	{
		num2[j] = temp[i] - '0';
	}
	//利用字符串数组的输入，来转化成为数字数组的输出，这样就能很好的利用处理字符串的函数
	int jin = 0;
	int len3 = 0;
	int flag = 0;
	
	len1 > len2 ? len3 = len1 : len3 = len2;

	for (int k = 0; k < len3 + 1; k++)
	{
		int sum = 0;
		sum = jin + num1[k] + num2[k];
		if (sum > 9)
		{
			jin = 1;
			sum = sum % 10;
			if (k == len3)
			{
				flag = 1;
				all[len3 + 1] = 1;
			}
		}
		
		all[k] = sum;
	}

	if (flag == 0)
	{
		for (int k = len3; k >= 0; k--)
		{
			printf("%d", all[k]);
		}
	}
	else
	{
		for (int k = len3 + 1; k >= 0; k--)
		{
			printf("%d", all[k]);
		}
	}

	return 0;
}