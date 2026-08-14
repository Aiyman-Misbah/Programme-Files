//6. Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
#include<stdio.h>
int sum_natural(int);
//sum(n)=1+2+3+4+5+6+7+8+9...+n-1+n
//sum(n)=sum(n-1)+n
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return n+sum_natural(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d",n,sum_natural(n));
    return 0;
}