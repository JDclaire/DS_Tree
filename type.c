#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};


/* newNode() 
 * 주어진 data를 저장하고, left와 right pointer 모두 null인 노드를 리턴.
 */
struct node* newNode(int data)
{
	struct node* node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

int main()
{
	/* create root */
	struct node *root = newNode(1);

	/* following structure : */
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	getchar();
	return 0;
}
