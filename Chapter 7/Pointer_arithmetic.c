#include<stdio.h>

int main(){
    //Pointer arithmetic using integer.
    //int a=2;
    //int *ptr=&a;
    // printf("The address of a is %llu\n",(unsigned long long)&a);
    // printf("The address of a is %llu\n",(unsigned long long)ptr);
    // ptr++;
    // printf("The address of a is %llu\n",(unsigned long long)ptr);
    //Output:
    // The address of a is 765580017172
    // The address of a is 765580017172
    // The address of a is 765580017176
    //Pointer arithmetic using character.
    char a='A';
    char *ptr=&a;
    printf("The address of a is %llu\n",(unsigned long long)&a);
    printf("The address of a is %llu\n",(unsigned long long)ptr);
    ptr++;
    printf("The address of a is %llu\n",(unsigned long long)ptr);
    return 0;
}