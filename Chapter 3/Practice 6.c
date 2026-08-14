/*
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the numbers :\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is the greatest number", a);
            }
            else
            {
                printf("%d is the greatest number", d);
            }
        }
        else if (c > d)
        {
            printf("%d is the greatest number", c);
        }
        else
        {
            printf("%d is the greatest number", d);
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is the greatest number", b);
        }
        else
        {
            printf("%d is the greatest number", d);
        }
    }
    else if (c > d)
    {
        printf("%d is the greatest number", c);
    }
    else
    {
        printf("%d is the greatest number", d);
    }
    return 0;
}
*/
//Chalak niyom:
#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter the numbers :\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the greatest number",b);
    }
    else if(c>b && c>a && c>d){
        printf("%d is the greatest number",c);
    }
    else{
        printf("%d is the greatest number",d);
    }
    return 0;
}