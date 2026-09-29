#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void func(char word[])
{
    char newword[100];

    int j = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalnum(word[i]) || word[i] == '_')
        {
            if (j == 0 && isdigit(word[i]))
            {
                continue;
            }

            newword[j] = word[i];
            j++;
        }
    }

    newword[j] = '\0';

    printf("%s\n", newword);
}

int main()
{
    char word[] = "variable#1";

    char word2[] = "12v@aribkeBB_2";

    func(word);
    func(word2);
}