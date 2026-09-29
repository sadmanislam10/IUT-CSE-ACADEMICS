/*
An enum is a special type that represents a group of constants (unchangeable values).
Enum is short for "enumerations", which means "specifically listed".

*/


#include<stdio.h>

enum level{
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
   enum level value = HIGH;

   printf("%d", value);

   return 0;
}