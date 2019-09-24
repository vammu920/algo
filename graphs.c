#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left, *right;
};
struct node *newNode(int data){
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	
	node->right=node->left=NULL;
	return node;

};
void search(stuct node* root, int data){
	if(root==NULL || root->data==data) return printf("Found\n");

	if(root->data<data) return search(root->right, data);
	return search(root->left, data);
}
void inorder(struct node* root){
	//these are the changes that iam making
}
void main(){
	struct node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);

}

