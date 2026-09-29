// /*

// Operator    Name    Action
// ^           XOR     Flips bits where the mask is 1.
// &           AND     Used to check if a bit is 1.
// |           OR      Used to set a bit to 1.
// ~           NOT     Flips all bits in a variable.

// */

// // SO TO REVERSE THE LAST BIT WE NEED TO USE BITWISE XOR WITH 1

// // BITWISE XOR SIGN = ^

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char encrypted[] = "CDRU!NG!MTBJ!@OE!RNSSX!GNS!UID!DYUS@!BM@RR";

//     printf("The encrypted message is : %s\n", encrypted);

//     printf("Decrypted: \n");

//     char decrypted[50];

//     int i;

//     for (i = 0; encrypted[i] != '\0'; i++)
//     {
//         decrypted[i] = encrypted[i] ^ 1;
//     }

//     decrypted[i] = '\0';

//     printf("%s", decrypted);

//     return 0;
// }

