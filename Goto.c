/*
Goto example
*/
#include <stdio.h>
int main(){
    int i=0;
    abc:
        printf("We got here traveling %d.\n", i);
        i++;
    if(i<10){
        goto abc;
    }
    return 0;
}