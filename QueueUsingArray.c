#include <stdio.h>
int main()
{
    int a[20];
    printf("Enter the number of elements you need in ur array");
    int n, ch;
    scanf("%d", &n);

    do
    {
        printf("\npress \n1. to push elements\n2. to poop element\n3. print Elements\n4. Exit");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (n > 20 || n <= 0)
            {
                printf("\ncant perform Puch operation");
            }
            else
            {
                printf("\n Enter the elements");
                for (int i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
            }

            break;

        case 2:
            if (n <= 0)
            {
                printf("Array Under flow");
                printf("\n");
            }
            else
            {
                int temp = a[0];
                printf(" the poped element is :%d",temp);
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = a[i + 1];
                }printf("\n");
                n--;
            }

            break;

        case 3:
        if(n<=0)
        {
            printf("array underflow \n");
        }
        else{
            
            for (int i = 0; i < n; i++)
            {
                printf("%d  ", a[i]);
            }printf("\n");
        }

        default:
            break;
        }
    } while (ch != 4);

    return 0;
}