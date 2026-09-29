// WITHOUT FUNCTION
// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char string[100];

//     fgets(string, sizeof(string), stdin);

//     for (int i = 0; string[i] != '\0'; i++)
//     {
//         if (isupper(string[i]))
//         {
//             string[i] = tolower(string[i]);
//         }
//         else if (islower(string[i]))
//         {
//             string[i] = toupper(string[i]);
//         }
//     }

//     printf("%s", string);

//     return 0;
// }


// WITH FUNCTION
// #include <stdio.h>
// #include <ctype.h>

// void function(char string[100])
// {
//     for (int i = 0; string[i] != '\0'; i++)
//     {
//         if (isupper(string[i]))
//         {
//             string[i] = tolower(string[i]);
//         }
//         else if (islower(string[i]))
//         {
//             string[i] = toupper(string[i]);
//         }
//     }
//     printf("%s", string);
// }
// int main()
// {
//     char string[100];

//     fgets(string, sizeof(string), stdin);

//     function(string);

//     return 0;
// }

// WITH FUNCTION & WITHOUT CTYPE AND ITS FUNCTIONS
#include <stdio.h>

void function(char string[100])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += 32;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32;
        }
        
    }
    printf("%s", string);
}
int main()
{
    char string[100];

    fgets(string, sizeof(string), stdin);

    function(string);

    return 0;
}