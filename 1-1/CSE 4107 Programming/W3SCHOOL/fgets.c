// to get multiple words in input
// Use the scanf() function to get a single word as input, and use fgets() for multiple words.
// fgets(destination, maxCharactersToRead, inputSource);

#include <stdio.h>
int main()
{

    char fullname[100];
    printf("Enter your full name \n");

    fgets(fullname, sizeof(fullname), stdin);

    // stdin = standard input, meaning: Take the input from the keyboard

    printf("Your full name is %s", fullname);

    return 0;
}