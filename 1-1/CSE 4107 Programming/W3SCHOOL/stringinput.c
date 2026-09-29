#include <stdio.h>
int main()
{
    char name[50];
    scanf("%s", &name);

    printf("Your name is %s", name);

    return 0;
}

// However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words).