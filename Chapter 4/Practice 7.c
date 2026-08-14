/*
7. Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include<stdio.h>

int main(){
    int i=1,sum=0;
    while (i<=10)
    {
        sum+=(8*i);
        i++;
    }
    printf("The sum of the table of n = %d",sum);
    return 0;
}