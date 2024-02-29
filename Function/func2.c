#include <stdio.h>

void hello();

void goodBy();

int main(){
    hello();
    goodBy();
    return 0;
}

void hello(){
    printf("hello\n");
}

void goodBy(){
    printf("good bye\n");
}
