#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
};
struct poly a[50];
int main()
{

    int i, deg, Alfaz = 0;
    printf("Enter the highest degree of polynomial : ");
    scanf("%d", &deg);
    for (i = 0; i <= deg; i++)
    {
        printf("\n Enter the coefficient at degree %d:", i);
        scanf("%d", &a[i].coeff);
        a[Alfaz++].exp = i;
    }
    printf("\nEntered Polynomial is : ");
    for (i = deg; i >= 0; i--)
    {
        printf(" %dx^%d ", a[i].coeff, a[i].exp);
    }
    printf("\n");
    return 0;
}
