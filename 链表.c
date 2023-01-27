#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define FLASE 0;
#define TURE 1;
typedef struct NODE
{
	int num;
	struct NODE* link;
}node;

void bianli(node* root, int a);//遍历打印
int charu1(node** rootp, int* p);//插入（基础）
int charu2(node** linkp, int* p);//插入（优化）
int shanchu(node** rootp, int* p);//删除

int main()
{
	//动态链表的构建
	node* p = NULL, * m = NULL;
	node* root = NULL;
	int a = 0, input = 0;
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		p = (node*)malloc(sizeof(node));
		if (p == NULL)
			printf("false");
		scanf_s("%d", &input);
		p->num = input;
		p->link = NULL;
		if (root == NULL)
		{
			root = p;
		}
		else
		{
			m->link = p;
		}
		m = p;
	}
	bianli(root, a);
	shanchu(&root, &a);
	bianli(root, a);
	return 0;
}

//动态链表的遍历打印
void bianli(node* root, int a)
{
	node* n = NULL;
	n = root;
	for (int j = 1; j <= a; j++)
	{
		printf("%d ", n->num);
		n = n->link;
	}
}

//动态链表的插入（基础版本）
int charu1(node** rootp, int* p)
{
	int new_num;
	scanf_s("%d", &new_num);
	node* new = NULL, * current = *rootp, * previous = NULL;
	while (current != NULL && current->num < new_num)
	{
		previous = current;
		current = current->link;
	}
	new = (node*)malloc(sizeof(node));
	if (new == NULL)
		return FLASE;
	new->num = new_num;
	new->link = current;
	if (previous == NULL)
		*rootp = new;
	else
		previous->link = new;
	*p += 1;
	return TURE;
}
//动态链表的插入（优化版本）
int charu2(node** linkp, int* p)
{
	int new_num;
	scanf_s("%d", &new_num);
	node* new = NULL, * current = NULL;
	while ((current = *linkp) != NULL && current->num < new_num)
		linkp = &current->link;
	new = (node*)malloc(sizeof(node));

	if (new == NULL)
		return FLASE;
	new->num = new_num;

	new->link = current;
	*linkp = new;
	*p += 1;
	return TURE;
}
//动态链表的删除
int shanchu(node** rootp, int* p)
{
	node* current = *rootp, * previous = NULL;
	int xu;
	scanf_s("%d", &xu);
	for (int i = 1; i != xu; i++)
	{
		previous = current;
		current = current->link;
	}
	if (previous == NULL)
		*rootp = current->link;
	else if (current->link == NULL)
		previous->link = NULL;
	else
		previous->link = current->link;
	free(current);
	*p -= 1;
	return TURE;
}
