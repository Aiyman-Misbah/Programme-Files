#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e);
void show(struct employee e){
    printf("Code is %d , Salary is %f , Name is %s",e.code,e.salary,e.name);
}
int main(){
    struct employee e1;
    e1.code=2504088;
    e1.salary=676767.67;
    strcpy(e1.name,"Misbah");
    show(e1);
    return 0;
}