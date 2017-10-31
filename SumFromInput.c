/*
Reads 2 inputs and add them up
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Please provide a value for A: ");
    scanf("%d", &a);
    printf("Please provide a value for B: ");
    scanf("%d", &b);
    c = a+ b;
    printf("Sum of %d + %d is %d\n", a, b, c);
    return 0;
}