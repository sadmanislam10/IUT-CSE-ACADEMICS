#include <stdio.h>

enum level
{
    LOW = 10,
    MEDIUM = 20,
    HIGH = 30
};

int main()
{
    enum level x = HIGH;
    printf("%d", x);

    return 0;
}