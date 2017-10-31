/*
By ref
*/
#include <stdio.h>

void increment(int *x);

int main(){
    int a = 10;
    int *refA;
    refA = &a;
    printf("Value of a before increment is: %d\n", a);
    increment(refA);
    printf("Value of a after increment is: %d \n", a);
    return 0;
}

void increment(int *x){
    (*x)++;
}