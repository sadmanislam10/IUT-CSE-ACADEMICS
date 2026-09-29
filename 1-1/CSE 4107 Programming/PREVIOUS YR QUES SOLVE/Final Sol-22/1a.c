// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int validate(char sms[])
// {
//     char head[5], hscboard[5], sscboard[5];
//     int hscroll, hscpass, sscroll, sscpass;

//     int count = sscanf(sms, "%s %s %d %d %s %d %d", head, hscboard, &hscroll, &hscpass, sscboard, &sscroll, &sscpass);

//     if (count < 7)
//     {
//         printf("Invalid Input\n");
//         return 0;
//     }

//     if (strcmp("IUT", head) != 0)
//     {
//         printf("Error in Head\n");
//         return 0;
//     }

//     if ((strcmp("DHA", hscboard) != 0) || (strcmp("DHA", sscboard) != 0))
//     {
//         printf("Error in Board\n");
//         return 0;
//     }

//     if ((hscpass - sscpass) < 2)
//     {
//         printf("Error in Year Difference\n");
//         return 0;
//     }

//     return 1;
// }

// int main()
// {
//     char sms[] = "IUT DHA 21678 2018 DH 201933 2016";

//     int x = validate(sms);

//     if (x)
//     {
//         printf("Valid");
//     }
//     else
//     {
//         printf("Invalid");
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validate(char sms[])
{
    char head[5], hscboard[5], sscboard[5];
    int hscroll, hscpass, sscroll, sscpass;

    sprintf(sms, "%s %s %d %d %s %d %d", head, hscboard, &hscroll, &hscpass, sscboard, &sscroll, &sscpass);

    int flag1 = 0, flag2 = 0;

    if ((strcmp(head, "IUT") == 0) && (strcmp(hscboard, "DHA") == 0)) // so on
    {
        flag1 = 1;
    }

    if ((hscpass - sscpass) >= 2)
    {
        flag2 = 1;
    }

    int res = flag1 + flag2;

    if (res == 2)
    {
        return 1;
    }

    return 0;
}

// int main()
// {
//     char sms[] = "IUT DHA 21678 2018 DH 201933 2016";

//     int x = validate(sms);

//     if (x)
//     {
//         printf("Valid");
//     }
//     else
//     {
//         printf("Invalid");
//     }

//     return 0;
// }