#include <stdio.h>
int main()
{
    int a[50];
    int n;
    printf("Enter the size");
    scanf("%d", &n);

    // taking input from the user
    printf("\n Enter the elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printing the elements of the array The traversal
    printf("\n elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Inserting the element at a specific position in the array :
    int ind, k;
    printf("\nEnter the value you wanna enter\n");
    scanf("%d", &k);
    printf("Enter the posion where you wanna place it\n");
    scanf("%d", &ind);

    // if the size if greater the 50 means the array cant hold anymore numbers
    if (n > 50)
    {
        printf("\nArray overflowed");
    }
    else if (n <= 0)
    {
        printf("\nArray underflowd cant insert the value");
    }
    else
    {
        // if size if not eql to 50 then we can enter the values in the array
        for (int i = n - 1; i >= ind - 1; i--) // we swap or shift the number to the left side from the end it makes the swapping easy then we stop at the indx
        {
            a[i + 1] = a[i];
        }
        // after swapping the element we set the element at teh index
        a[ind - 1] = k;
        n++;
    }

    // printing array after the insertion

    printf("\nthe array after the inserton ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

//DELETION 
    printf("\nEnter the index from where u wanna delete the item");
    int din;
    scanf("%d", &din);
    if (din <= 0 || din>n )
    {
        printf("\n Invalid Position \n ");
    }else if(n<=0)
    {
        printf("array is empty\n");
    }
    else
    {
        int temp = a[ind - 1];
        for (int i = ind - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;

        printf("\nthe deleted element is :%d  \n", temp);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
