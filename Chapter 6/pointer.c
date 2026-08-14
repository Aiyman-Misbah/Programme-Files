#include<stdio.h>

int main(){
    int i=72;
    int* j=&i; //j is a pointer pointing to i,j stores the address of i,j is an integer pointer.
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The value at address j is %d\n",*j);
    printf("The value in i is %d\n",*(&i));
    printf("The value in j is %p\n",*(&j));
    return 0;
}