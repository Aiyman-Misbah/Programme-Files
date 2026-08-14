//1. Write a program to print the address of a variable. Use this address to get the value of the variable.

#include<stdio.h>

int main(){
    int i=2;
    int* ptr=&i;
    printf("The address of i is %p\n",&i);
    printf("The value at i is %d",*ptr);
    return 0;
}