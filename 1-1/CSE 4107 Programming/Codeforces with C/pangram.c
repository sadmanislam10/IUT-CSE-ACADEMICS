#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    char word[n + 1];

    scanf("%s", &word);

    printf("%s", word);

    if (n<26)
    {
        printf("NO");

    }

    if (n>=26)
    {
        
    }
    
    

    return 0;
}