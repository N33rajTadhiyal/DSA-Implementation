#include <stdio.h>
int main()
{
    int ch;
    int a[20];
    int c = -1;
    int el;
    do
    {
        printf("\nWhat do u wanna do?:\n1.push element\n2.pop an element\n3.print the stack\n4.update an element\n5.peek\n6.exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            if (c >= 20)
            {
                printf("Stack Overflow \n");
            }
            else
            {
                c++;
                printf("Enter the element u wanna push ");
                scanf("%d", &el);
                a[c] = el;
            }

            break;

        case 2:
            if (c < 0)
            {
                printf("Stack is empty\n");
            }
            else
            {
                int temp = a[c];
                printf("Popped element : %d \n", temp);
                c--;
            }
            break;

        case 3:
            if (c < 0)
            {
                printf("Stack Underflow\n");
            }
            else
            {
                for (int i = 0; i <= c; i++)
                {
                    printf("%d  ", a[i]);
                }
            }

            break;

        case 4:
            if (c >= 20)
            {
                printf("Stack overflow\n");
            }
            else if (c < 0)
            {
                printf("stack underflow\n");
            }
            else
            {
                int ind = -1;
                int n = -1;
                printf("enter the index where you wanna push: ");
                scanf("%d", &ind);
                printf("\nenter the element wanna push: ");
                scanf("%d", &n);

                int k = c;
                int p=c+1;
                while (k >= ind-1)
                {
                    a[p] = a[k];
                    k--;
                    p--;
                    
                }
                a[ind - 1] = n;
                c++;
            }

            break;

        case 5:
      if(c<0)
      {
        printf("Under flow\n");
      }else{
        printf(" the top element in stack is :%d \n",a[c]);
      }
            break;

            case 6:
            break;

        default:
            break;
        }
    } while (ch != 6);

    return 0;
}