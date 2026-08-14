#include<stdio.h>

int main(){
    char i='A';
    char* j=&i; //j is a pointer pointing to i,j stores the address of i,j is an character pointer.

    float k=5.342;
    float* k1 = &k;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The value at address j is %c\n",*j);
    printf("The value in i is %c\n",*(&i));
    printf("The value in j is %p\n",*(&j));
    printf("The value in k1 is %p\n",*(&k1));
    printf("The value at address k1 is %f\n",*k1);
    return 0;
}