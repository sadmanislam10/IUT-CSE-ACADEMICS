// make x shape with name

#include <stdio.h>
int main()

{
    char name[100] = "SADMAN";

    printf("%s%12s\n", name, name);
    printf("%7s%10s\n", name, name);
    printf("%8s%6s\n", name, name);
    printf("%7s%10s\n", name, name);
    printf("%s%12s\n", name, name);

    return 0;
}