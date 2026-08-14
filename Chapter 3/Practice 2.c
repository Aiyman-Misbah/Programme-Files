#include <stdio.h>

int main()
{
    int Math, Physics, Chemistry;
    printf("Enter your Math marks\n");
    scanf("%d", &Math);
    printf("Enter your Physics marks\n");
    scanf("%d", &Physics);
    printf("Enter your Chemistry marks\n");
    scanf("%d", &Chemistry);
    int total = Math + Physics + Chemistry;
    if (Math < 33 || Physics < 33 || Chemistry < 33)
    {
        printf("You have failed");
    }
    else if (total/3 <40)
    {
        printf("You have failed");
    }
    else
    {
        printf("You have passed");
    }
    return 0;
}