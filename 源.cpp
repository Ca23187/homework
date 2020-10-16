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
//其他的我就都看不懂了，最近网上只找了些二叉树的图相互对比然后揣摩每一句的意思，在短期内我也只能做到照猫画虎，其他任务由于自己学力不足所以没能完成万分抱歉