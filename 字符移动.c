#include<stdio.h>
#include<math.h>
//X��̽�յ���һ�������ţ��ŷ�û��͸¶�κμ����˵���Ϣ��������Ҳ��ȫ���������·���һ�����룬
// �����ھ���ʮ��֮һ΢���˼��֮�������������еİ���������⣿
// ����������������ַ�������λ�Ϳ��Եó���������˼�����磺dwr������λ�ɵ�gzu��
// �����x, y, z��ѭ�����Ʊ��a, b, c�������ż�����̫���ˣ�ϣ�����ܰ�����
// 
// 
//��������
//����һ�γ���С��50���ַ�����
//
//�������
//������ܺ���ַ�������ĩ�޶���ո�
//
//��ʾ
//��ʾ
//
//��������  ����  ����
//abcdefghijklmnopqrstuvwxyz
//
//�������
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
