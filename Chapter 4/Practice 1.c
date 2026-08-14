//1. Write a program to print multiplication table of a given number n.

#include<stdio.h>

int main(){
    int i=1,n,mul;
    printf("Enter the number :");
    scanf("%d",&n);
    while (i<=n)
    {
        mul=n*i;
        printf("%d x %d = %d\n",n,i,mul);
        i++;
    }
    
    
    return 0;
}