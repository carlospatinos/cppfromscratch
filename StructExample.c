#include <stdio.h>

struct emp{
    int id;
    char name[20];
    float sal;
};

int main(){
    struct emp e, e2;
    printf("Enter Employee number    :"); scanf("%d", &e.id);
    printf("Enter Employee name       :"); scanf("%s", e.name);
    printf("Enter Employee salary      :"); scanf("%f", &e.sal);
    
    e2=e;
    e2.id=2;

    printf("\n\nEmployee Details are as follows….\n");
    printf("%d    %s      %f\n", e.id, e.name, e.sal);
    printf("%d    %s      %f\n", e2.id, e2.name, e2.sal);

    printf("int size is %d\n", sizeof(int));                           /* 2  */
    printf("float size is %d\n", sizeof(float));                       /* 4  */
    printf("struct emp size is %d\n", sizeof(struct emp));   
    return 0;
}