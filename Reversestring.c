#include <stdio.h>
int main()
{
    char str[100], *ptr;
    int i, l;
    printf("Enter a String:");
    gets(str);
    ptr = str;
    for (i = 0; i < 100; i++)
    {
        if (*ptr == '\0')

            break;
        ptr++;
    }
    l = i;
    ptr--;
    printf("The reversed string is:");
    for(i=l;i>0;i--)
    printf("%C",*ptr--);
    return 0;
}