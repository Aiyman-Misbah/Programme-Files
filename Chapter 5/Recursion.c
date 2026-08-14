#include<stdio.h>

int factorial(int);

//Factorial(5)=1X2X3X4X5
//Factorial(4)=1X2X3X4
//Factorial(3)=1X2X3
//Factorial(2)=1X2
//Factorial(n)=1X2X3X...X(n-1)Xn
//Factorial(n-1)=1X2X3X...X(n-1)

//Factorial(n)=Factorial(n-1)Xn

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    //Factorial(n)=Factorial(n-1)Xn
    return factorial(n-1)*n;

}

int main(){
    int a;
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}