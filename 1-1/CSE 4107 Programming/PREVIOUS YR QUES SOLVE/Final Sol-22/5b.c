// painnnnnnnnnnnnn

#include <stdio.h>
#include <string.h>

int func(char news[])
{
    int count = 0;

    char *ptr;

    ptr = news;

    while ((ptr = strstr(ptr, "strike")) != NULL)
    {
        count++;
        ptr += strlen("strike");
    }

    /*
    # strstr work--
    It searches for "strike" starting from starting_point
    👉 Returns:
    ✅ address (pointer) where "strike" starts
    ❌ NULL if not found

    # ptr=strstr(ptr,"strike")
    “Search for "strike" from where ptr is now, and update ptr to that location”
    */

    ptr = news;
    while ((ptr = strstr(ptr, "blockade")) != NULL)
    {
        count++;
        ptr += strlen("blockade");
    }

    if (count > 5)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char news[1000];

    printf("Enter the news report\n");

    fgets(news, sizeof(news), stdin);

    int x = func(news);

    if (x)
    {
        printf("Cancelled");
    }
    else
    {
        printf("Not cancelled");
    }

    return 0;
}

