// 5. Write a program with a structure representing a complex number.

#include<stdio.h>
struct c{
    int real;
    int imaginary;
};
int main(){
    struct c c1 = {2,3};
    printf("The Complex number c1 is %d + %di",c1.real,c1.imaginary);
    return 0;
}