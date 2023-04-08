#include<stdio.h>
#include<stdlib.h>
void Create();
void Prin();
void Delete();
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
int count=0;
int main()
{
  int ch=0;
  do
  {
    printf("Enter a choice \n1.insert a node\n2.print linked list\n3.delete an node\n4.exit");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    Create();
        break;
    
    case 2:
    Prin();
    break;

    case 3:
    Delete();
    break;

    case 4:
    break;

    default:
        break;
    }
    
  }while(ch!=4);


    return 0;
}

void Create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==NULL)
    {
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }temp->next=head;
}

void Prin()
{
    temp=head;

    if(head==NULL)
    {
        printf("the List is empty");
    }else{
        do
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }while(temp!=head);
    }
}

void Delete()
{
    int pos,k=0;
    struct node *prev;
    printf("Enter the position");
    scanf("%d",&pos);

    if(pos>count || pos <0)
    {
        printf("Invalid position");
    }
    else{
        while (k<pos-1)
        {
            prev=temp;
           temp=temp->next;
           k++;
        }
        printf("Deleted element :%d \n",temp->data);
        prev->next=temp->next;
        free(temp);
        

        
    }


}