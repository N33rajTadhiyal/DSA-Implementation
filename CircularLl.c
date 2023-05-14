#include <stdio.h>
#include <stdlib.h>
void Create();
void Prin();
void Delete();
int Cou();
void DelF();
void DelL();
struct node
{
    int data;
    struct node *next;
};
struct node *tail, *newnode;
int count = 0;
int main()
{
    int ch = 0;
    do
    {
        printf("\n\nEnter a choice \n1.insert a node\n2.print linked list\n3.delete an node from a specific position");
        printf("\n4.delete form the begining\n5.delete form end\n6.exit  ");
        scanf("%d", &ch);

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
            DelF();
            break;
        case 5:
            DelL();
            break;
        case 6:
            ch = 6;
            break;

        default:
            break;
        }

    } while (ch != 6);

    return 0;
}

void Create()
{

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data  ");
    scanf("%d", &newnode->data);
    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

void Prin()
{
    struct node *temp;
    if (tail == 0)
    {
        printf("The lis is empty\n");
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {
            printf("%d  ", temp->data);
            temp = temp->next;
        }
        printf("%d ", tail->data);
        printf("\n");
    }
}

void Delete()
{
    int pos, count = Cou();
    struct node *pre, *temp;
    printf("Enter the position  ");
    scanf("%d", &pos);

    if (tail == NULL)
    {
        printf("List is empty \n");
    }
    else if (pos > count || pos < 0)
    {
        printf("Invalid position \n");
    }
    else
    {
        int k = 0;
        temp = tail->next;
        while (k < pos - 1)
        {
            pre = temp;
            temp = temp->next;
            k++;
        }
        printf("Deleted element :%d  \n", temp->data);
        pre->next = temp;
        free(temp);
    }
}
void DelF()
{
    struct node *temp = tail->next;
    if (tail == 0)
    {
        printf("list is empty \n");
    }
    else if (temp->next == temp)
    {
        printf("Deleted element =%d \n", temp->data);
        tail = 0;
        free(temp);
    }
    else
    {

        tail->next = temp->next;
        printf("Deleted element =%d \n", temp->data);
        free(temp);
    }
}
void DelL()
{
    struct node *temp = tail->next;
    struct node *pre;
    if (tail == 0)
    {
        printf("list is empty \n");
    }
    else if (temp->next==tail)
    {
        printf(" 1 Deleted element =%d \n", temp->data);
        tail = 0;
        free(temp);
    }
    else
    {

        while (temp->next!=tail->next)
        {pre=temp;
        temp=temp->next;
           
        }
        pre->next=tail->next;
        tail=pre;
        printf("Deleted item :%d",temp->data);
        free(temp);
        
    }
}
int Cou()
{
    int count = 0;
    struct node *temp;
    if (tail == 0)
    {
        return 0;
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {
            count++;
            temp = temp->next;
        }
        return (count + 1);
    }
}