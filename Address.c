#include <stdio.h>

void test(){
    printf("Hello test");
}

int main(){
    int a = 10;
    test();
    printf("Value of a is %d.\n", a);
    printf("Address of a is %p.\n", &a);
    printf("Address of test() is %p.\n", &test);
    return 0;
}