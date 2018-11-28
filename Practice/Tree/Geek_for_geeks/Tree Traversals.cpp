#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int val)
	{	
		data=val;
		left=NULL;
		right=NULL;
	}
};
void postorder(Node *node)
{
	if (node==NULL)
		return;
	if(node->left!=NULL)
		postorder(node->left);
	if(node->right!=NULL)
		postorder(node->right);
	printf("%d ",node->data);
}
void inorder(Node *node)
{
	if(node==NULL)
		return;
	if(node->left!=NULL)
		inorder(node->left);
	printf("%d ",node->data);
	if(node->right!=NULL)
		inorder(node->right);
}
void preorder(Node *node)
{
	if(node==NULL)
		return;
	printf("%d ",node->data);
	if(node->left!=NULL)
		preorder(node->left);
	if(node->right!=NULL)
		preorder(node->right);
}
int main()
{
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	printf("Pre Order\n");
	preorder(root);
	printf("\n------------\n");
	printf("In Order\n");
	inorder(root);
	printf("\n------------\n");
	printf("Post Order\n");
	postorder(root);
	return 0;
}
