/*
5. Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main().
*/
#include<stdio.h>
int sum(int* a,int* b);
float avg(int* a,int* b);

int sum(int* a,int* b){
    int s=*a + *b;
    return s;
    
}
float avg(int* a,int* b){
    float av=(*a + *b)/2.00;
    return av;
    
}
int main(){
    int x=5,y=2;
    int s = sum(&x,&y);
    float av = avg(&x,&y);
    printf("The sum is %d\n",s);
    printf("The avg is %.2f\n",av);
    printf("The address of s is %p\n",&s);
    printf("The address of av is %p\n",&av);

    return 0;
}