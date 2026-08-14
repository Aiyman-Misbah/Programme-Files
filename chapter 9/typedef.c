#include<stdio.h>
#include<string.h>
typedef struct employee 
{ 
    int code;
    float salary; 
    char name[10]; 
} Emp;
int main(){
    // typedef int misbah;
    // misbah a = 88;
    // printf("%d",a);

    // typedef struct employee Emp; //Works same.

    Emp e1;
    Emp *ptr1 = &e1; 

    e1.code = 2504088;
    e1.salary = 45000.55;
    strcpy(e1.name, "Aiyman");
    printf("%d %f %s \n", e1.code, e1.salary, e1.name);
    printf("%d %f %s \n", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}