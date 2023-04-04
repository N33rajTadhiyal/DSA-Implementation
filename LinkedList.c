#include<stdio.h>
#include<stdlib.h>
void pri();
void Ins();
struct node{
     int data;
     struct node * next;
};
struct node *head,*newnode,*temp;
int main()
{
    int ch;
    do{
        printf("\nEnter a choice\n1.Insert a node in the Linked List\n2.Print the linked list\n3.Exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            Ins();
            break;
            
            case 2:
            pri();
            break;

            case 3:
            break;

            default:
             break;

        }
    }
    while(ch!=3);


    return 0;
}

void Ins()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter a value ");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    

}

void pri()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }

}