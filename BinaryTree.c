#include<stdio.h>
#include <stdlib.h>
struct node * create();
void inOrder(struct node * root);
void preOrder(struct node * root);
void postOrder(struct node * root);
struct node{
    struct node * left;
    int data;
    struct node * right;
};
int main()
{
     struct node * root=create();
     printf("\n Pre order is :\n");
     preOrder(root);
     printf("\n Post order is :\n");
     postOrder(root);
      printf("\n In order is :\n");
     inOrder(root);
    return 0;
}

struct node * create()
{
   struct node * newnode = (struct node *) malloc(sizeof(struct node));
   printf("Enter the data or press -1 to not enter anything bro! \n");
   int x;
   scanf("%d",&x);
   printf("%d",x);
   newnode->data=x;
   if(x==-1)
   {
    return 0;
   }
   else{
    
    printf("Enter left node of %d \n",x);
    newnode->left=create();
    printf("Enter right node of %d \n",x);
    newnode->right=create();
    return newnode;
   }

}
void preOrder(struct node * root)
{
	
	if(root==0)
	   return ;
	
	printf("%d  ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(struct node * root)
{
	if(root==0)
	   return ;
	
	
	postOrder(root->left);
	postOrder(root->right);
	printf("%d  ",root->data);
}
void inOrder(struct node * root)
{
	if(root==0)
	   return ;
	
	
	inOrder(root->left);
	printf("%d  ",root->data);
	inOrder(root->right);
	
}

