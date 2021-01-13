#include <stdio.h>
int main()
{
    int c, r, i, j, a[10][10], b[10][10], k = 1, count = 0;

    printf("Order of matrix:");
    scanf("%d %d", &r, &c);
    printf("Enter the elements:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]!=0){
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
                count++;
            }
        }
    }
    b[0][0]=r;
    b[0][1]=c;
    b[0][2]=count;
    printf("The sparse matrix is:\n\n");

 for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    // printf() displays the string inside quotation
    return 0;
}