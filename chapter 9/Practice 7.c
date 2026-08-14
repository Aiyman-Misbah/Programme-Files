// 7. Write problem 5’s structure using ‘typedef’ keywords.

#include<stdio.h>
typedef struct c{
    int real;
    int imaginary;
}Complex;
int main(){
    Complex c1 = {2,3};
    printf("The Complex number c1 is %d + %di",c1.real,c1.imaginary);
    return 0;
}