#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int const TURE = 1;

typedef struct STU
{
	char name[20];
	int hao;
	double ji;
	struct STU* link;
} student;

void shanchu(student** rootp, student* curp, student* prep);

int main()
{
	//输入并计算平均数
	double sum = 0, aver = 0;
	double cnt = 0;
	student* m = NULL, * new = NULL, * root = NULL;
	while (TURE)
	{
		new = (student*)malloc(sizeof(student));
		if (new != NULL)
		{
			scanf_s("%s", new->name, 20);
			if (strcmp("*", new->name) == 0)
				break;
			scanf_s("%d%lf", &new->hao, &new->ji);
			sum += new->ji;
			if (root == NULL)
				root = new;
			else
				m->link = new;
			m = new;
			cnt++;
		}
	}
	free(new);
	if (m != NULL)
		m->link = NULL;
	aver = sum / cnt;
	
	
	//对不符合要求的节点进行删除
	student* cur = root, * pre = NULL;
	while (TURE)
	{
		if (cur!=NULL&&cur->ji < aver)
			shanchu(&root, cur, pre);
		if (cur != NULL)
		{
			pre = cur;
			cur = cur->link;
		}
	}
	
	//对剩下的节点进行遍历打印
	student* n = root;
	do
	{
		if (n != NULL)
		{
			puts(n->name);
			n = n->link;
		}
	} while (n!=NULL&&n->link != NULL);
	return 0;
}

void shanchu(student** rootp, student* curp, student* prep)
{
	if (prep == NULL)
		*rootp = curp->link;
	else if (curp->link == NULL)
		prep->link = NULL;
	else
		prep->link = curp->link;
	free(curp);
}


