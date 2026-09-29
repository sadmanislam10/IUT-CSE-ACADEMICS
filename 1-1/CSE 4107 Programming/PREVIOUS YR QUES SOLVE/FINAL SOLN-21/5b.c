#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pass_validator(char string[])
{
    int len = strlen(string);

    if (len < 10)
    {
        printf("Password is too short\n");
        return 0;
    }

    int upperflag = 0, lowerflag = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isupper(string[i]))
        {
            upperflag = 1;
        }
        if (islower(string[i]))
        {
            lowerflag = 1;
        }
    }
    if (upperflag == 0 || lowerflag == 0)
    {
        printf("No uppercase or lowercase letter\n");
        return 0;
    }

    int numfound = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isdigit(string[i]))
        {
            numfound = 1;
        }
    }

    if (!numfound)
    {
        printf("No number is found\n");
        return 0;
    }

    if ((strstr(string, "password") != NULL))
    {
        printf("Password shouldnt be in password\n");
        return 0;
    }
    return 1;
}

int main()
{
    char password[100];

    scanf("%s", &password);

    int x = pass_validator(password);

    if (x)
    {
        printf("Valid");
    }
    else
    {
        printf("Not Valid");
    }

    return 0;
}

// if (!(string[i] == 0 ||string[i] == 1 ||string[i] == 2 ||string[i] == 3 ||string[i] == 1 ||string[i] == 1 ||string[i] == 1 ||string[i] == 1 ||string[i] == 1 ||string[i] == 1 || ))
// {
//     /* code */
// }