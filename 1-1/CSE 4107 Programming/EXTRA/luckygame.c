#include <stdlib.h>
#include <time.h>

srand(time(0));                 // Seed the random number generator
int randomNumber = rand() % 10; // Generate random number between 0 and 9