#include <stdio.h>

int main()
{
    char *s="welcome";
    int i=0;
    for(i; s[i]!='\0';i++)
    {
        printf("%c", s[i]);
    }
    printf("\nLength is %d\n", i);

    return 0;
}