// 1. Write a program to read three integers from a file.
#include<stdio.h>

int main(){
    int a, b, c;
    FILE *ptr;
    ptr = fopen("../file.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("The three integers are: %d, %d, %d\n", a, b, c);
    fclose(ptr);
    return 0;
}