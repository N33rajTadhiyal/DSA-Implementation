#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node * left;
	int data;
	struct node * right;
};
void Infix(struct node * root);
struct node * Insert(struct node *,int);
struct node * Makenode(int x);

struct node * Makenode(int x)
{
  struct node * newnode=(struct node *)malloc(sizeof(struct node));  
      newnode->data=x;
	  newnode->left=newnode->right=NULL;
	  
	  return newnode;
  
}
struct node * Insert(struct node * root,int x)
{
    if(root==NULL)
     {
	  
      return Makenode(x);
	}
	 if(x<root->data)
	{
	root->left=	Insert(root->left,x);
	}
	else if(x>root->data)
	{
	  root->right=Insert(root->right,x);
	}  	 
	return root;
  	
  }

void Infix(struct node * root)
{
	if (root != NULL) {
        Infix(root->left);
        printf("%d ", root->data);
        Infix(root->right);
    }
	    
}


int main()
{
	struct node *root=NULL;
	root=Insert(root,50);
	Insert(root,30);
	Insert(root,20);
	Insert(root,40);
	Insert(root,70);
	Insert(root,60);
	Insert(root,80);

	
	
	printf("infix order of tree :\n");
	Infix(root);
	
	return 0;
}