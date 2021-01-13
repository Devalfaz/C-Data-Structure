#include <stdio.h>

int main()
{
    int c, r, i, j, ar[10][10], num, flag = 0;
    printf("Order of matrix:");
    scanf("%d %d", &r, &c);
    printf("Enter the elements:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           scanf("%d", &ar[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    printf("Enter the searching element:\n");
    scanf("%d", &num);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (ar[i][j] == num)
            {
                printf("Element is at %d row %d coloumn\n", i + 1, j + 1);
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        printf("Element not found\n");
    return 0;
}