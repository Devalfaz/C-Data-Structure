#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[50];
    int length, j, i;
    puts("Enter String one : ");
    gets(s1);
    puts("Enter String two : ");
    gets(s2);
    //strcat(s1,s2);
    //puts(s1);
    // store length of s1 in the length variable
    length = 0;
    while (s1[length] != '\0')
    {
        ++length;
    }

    // concatenate s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++length)
    {
        s1[length] = s2[j];
    }

    // terminating the s1 string
    s1[length] = '\0';

    printf("After Appending: ");
    puts(s1);

    return 0;
}