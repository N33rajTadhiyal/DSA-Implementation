#include <stdio.h>
#include <stdlib.h>

void insert();
void pri();
void inseAtStart();
void insertAtEnd();
void insertaAfteraPos();
void deleteFirstnode();
void DeleteLastNode();
void DeleteNodeFrom();
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
int main()
{
    int ch;
    do
    {
        printf("\nEnter a choice\n1.Insert a node in the Linked List\n2.Print the linked list\n3insert node at start\n4insert at the end of ll\n5Insert a node after a given position ");
        printf("\n6.delete first node\n7.delete the end node\n8.delete a given node\n9.exit  ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            pri();
            break;

        case 3:
            inseAtStart();
            break;

        case 4:
            insertAtEnd();
            break;

        case 5:
            insertaAfteraPos();
            break;
        case 6:
            deleteFirstnode();
            break;
        case 7:
         DeleteLastNode();
            break;
        case 8:
         DeleteNodeFrom();
            break;
        case 9:
            ch = 9;
            break;
        default:
            ch = 7;
            break;
        }
    } while (ch != 9);

    return 0;

    return 0;
}

void insert()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void pri()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void inseAtStart()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void insertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the value ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    temp = newnode;
}

void insertaAfteraPos()
{
    temp = head;
    int count = 1, pos, i = 0;
    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }
    printf("Enter the position after which you wanna insert the number ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid position\n");
    }
    else if (pos == 0)
    {
        inseAtStart();
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value ");
        newnode->next = 0;
        scanf("%d", &newnode->data);

        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void deleteFirstnode()
{
    if (head == NULL)
    {
        printf("Linked list is empty , invalid operation sir");
    }
    else
    {
        temp = head;
        head = head->next;
        printf("\nDeleted node :%d",temp->data);
        free(temp);
    }
}

void DeleteLastNode()
{
    struct node *previous;
    temp=head;
    if( head==NULL)
    {
printf("Linked list is empty , invalid operation sir");
    }
    if(head->next==NULL)
    {
        printf("\n Deleted node :%d",head->data);
        head->next=NULL;
    }
    else{
        while (temp->next!=0)
        {
            previous=temp;
             temp=temp->next;
        }
        previous->next=0;
        printf("\ndeleted element :%d",temp);
        free(temp);
        
    }
}
void DeleteNodeFrom()
{
    temp = head;
    struct node * previous;
    int count = 1, pos, i = 0;
    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }
    printf("Enter the position you wanna remove ");
    scanf("%d", &pos);
    if (pos > count || pos <0 )
    {
        printf("Invalid position\n");
    }
    if(pos==1)
    {
        temp=head;
        printf("\n deleted node :%d \n",head->data);
        head=head->next;
        free(temp);
    }
    else{        
        temp = head;
        while(i<pos-1)
        {
           previous=temp;
           temp=temp->next;
           i++;
        }
        printf("\nDeleted node :%d",temp->data);
        previous->next=temp->next;
        free(temp);
    }

}