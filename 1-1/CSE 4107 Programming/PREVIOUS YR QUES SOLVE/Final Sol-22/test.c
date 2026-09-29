// // #include <stdio.h>

// // void hello_world(char *a)
// // {
// //    printf("hello_world\n");
// // }

// // int main()
// // {
// //    hello_world("printf()"); // here "printf()" is a string..
// //    return 0;
// // }

// #include <stdio.h>

// #define hello_world(a) printf("hello_world\n")

// int main()
// {

//    hello_world("printf()");
//    return 0;
// }

#include<stdio.h>

int main()
{

printf("Encrypted message: ");
char word[] = "CDRU!NG!MTBJ!@OE!RNSSX";
printf("%s\n", word);

char new[100];
int i;

for( i=0; word[i] != '\0'; i++)
{
   new[i] = word[i]^1;
}

new[i] = '\0';

printf("%s", new);

}