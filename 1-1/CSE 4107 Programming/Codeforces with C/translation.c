#include <stdio.h>
#include <string.h>

int main()

{
    char arr[101], rev[101], brr[101];

    scanf("%s %s", arr, brr);

    int len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        rev[i] = arr[len - i - 1];
    }

    rev[len] = '\0';

    if (strcmp(rev, brr) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}