#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}Node;
typedef struct
{
	Node* root;
}Tree;
void insert(Tree* tree, int value)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = value;
	node->left = NULL;
	node->right = NULL;
	return ;
}
//�������ҾͶ��������ˣ��������ֻ����Щ��������ͼ�໥�Ա�Ȼ��Ħÿһ�����˼���ڶ�������Ҳֻ��������è�������������������Լ�ѧ����������û�������ֱ�Ǹ