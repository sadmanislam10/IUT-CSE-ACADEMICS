#include <stdio.h>

char *finder(char *str, char target)
{
    while (*str != '\0')
    {
        if (*str == target)
        {
            return str;
        }
        str++;
    }

    return NULL; // special pointer - means nothing is found
}

int main()
{
    char src[] = "SadmanIslam";
    char target = 'd';

    char *result = finder(src, target);

    if (result == NULL)
    {
        printf("Not found");
        
    }
    else
    {
        // printf("found %c at %p", target, (void*)result);

        printf("found %c at %p", *result, (void*)result);
        
    }
    

    return 0;
}