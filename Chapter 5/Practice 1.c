//1. Write a program using function to find average of three numbers.
#include<stdio.h>
float avarage(int a,int b,int c);

float avarage(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a=3,b=5,c=9;
    printf("The avarage of a,b and c is %f",avarage(a,b,c));
    return 0;
}