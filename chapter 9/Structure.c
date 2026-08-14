#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1, e2;

    e1.code = 2504088;
    e1.salary = 45000.55;
    strcpy(e1.name, "Aiyman");
    printf("%d %f %s \n", e1.code, e1.salary, e1.name);
    e2.code = 2504027;
    e2.salary = 55000.45;
    strcpy(e2.name, "Misbah");
    printf("%d %f %s \n", e2.code, e2.salary, e2.name);

    return 0;
}