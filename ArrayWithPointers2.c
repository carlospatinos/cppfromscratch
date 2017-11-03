#include <stdio.h>
int main()
{
     int i, a[ ] = { 56, 43, 78, 98, 12 }, *p;
     p = a;
     while (*p)           /* or for(int i = 0; i<5; i++ ) */
          printf("%d\n", *p++);
     return 0;
}