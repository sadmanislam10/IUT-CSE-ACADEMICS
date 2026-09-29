#include<stdio.h>
void f1(char *str){
    if(*str){
        printf("%c",*str);
        // f1(str+1);
        // f1(str++);

        f1(++str);
        printf("%c",*str);
    }
}
int main(){
    f1("FIFA-2022");
}