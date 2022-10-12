#include<stdio.h>
#include<math.h>
//X侦探收到了一封匿名信，信封没有透露任何寄信人的信息，内容上也完全看不懂，仿佛是一堆乱码，
// 但是在经过十分之一微秒的思考之后，他发现了其中的奥妙，啊！就这？
// 他发现如果把所有字符后移三位就可以得出本来的意思，例如：dwr后移三位可得gzu，
// 如果是x, y, z则循环后移变成a, b, c，但是信件内容太多了，希望你能帮他。
// 
// 
//输入描述
//输入一段长度小于50的字符串。
//
//输出描述
//输出解密后的字符串，行末无多余空格
//
//提示
//提示
//
//样例输入  复制  更多
//abcdefghijklmnopqrstuvwxyz
//
//样例输出
//defghijklmnopqrstuvwxyzabc


int main()
{
	char string[50] = { 0 };
	char bianhua[50] = { 0 };
	scanf_s("%s", &string, 50);
	for (int i = 0; i < 50; i++)
	{
		bianhua[i] = string[i] + 3;
		
	}
	

	for (int n = 0; n < 50; n++)
	{
		if (bianhua[n]>=65)
		{
			if (bianhua[n] == 91 || bianhua[n] == 92 || bianhua[n] == 93 ||
				bianhua[n] == 123 || bianhua[n] == 124 || bianhua[n] == 125)
				printf("%c",bianhua[n]-26);
			else
				printf("%c", bianhua[n]);
			
		}
	}
	return 0;
}
