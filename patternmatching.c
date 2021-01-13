#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int pos;
    printf("Enter some text:\n");
    gets(a);
    printf("Enter a string to find:\n");
    gets(b);
    pos = match(a, b);
    if (pos != -1)
        printf("Found at location:%d\n", pos + 1);
    else
        printf("Not found\n");
    return 0;
}
int match(char text[], char ptn[])
{
    int c, d, e, text_1, ptn_1, pos = -1;
    text_1 = strlen(text);
    ptn_1 = strlen(ptn);
    if (ptn_1 > text_1)
        return -1;
    for (c = 0; c <= text_1 - ptn_1; c++)
    {
        pos = e = c;
        for (d = 0; d < ptn_1; d++)
        {
            if (ptn[d] == text[e])
                e++;
            else
                break;
        }
        if (d == ptn_1)
            return pos;
    }
    return -1;
}