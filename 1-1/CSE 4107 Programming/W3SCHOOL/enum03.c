#include <stdio.h>

enum level
{
    low = 1,
    medium,
    high
};

int main()
{
    enum level value = low;

    switch (value)
    {
    case 1:
        printf("Low Level\n");
        break;

    case 2:
        printf("Medium Level\n");
        break;

    case 3:
        printf("High Level\n");
        break;
    }

    return 0;
}