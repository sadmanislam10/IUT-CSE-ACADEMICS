/* "We are the so-called "Vikings" from the north.";
Because strings must be written within quotes, C will misunderstand this string, and generate an error:

*/

#include <stdio.h>
int main()
{
    // char sen[] = "We are the so-called "Vikings" from the north.";   WRONG COZ DOUBLE QUATATION

    char sen[] = "He is a \"viking\" from the north \n";
    printf("%s", sen);

    char txt[] = "It's alright\n";
    printf("%s", txt);
    
    char sentence[] = "This is / called backslash";
    printf("%s", sentence);

    return 0;
}