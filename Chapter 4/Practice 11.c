//11. Implement 10 using other types of loops.

#include<stdio.h>

int main(){
     int i=2,n,isprime=1;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n<=1){
        isprime=0;
    }
    else{
       while(i<n){
        if(n%i==0){
            isprime=0;
            break;
        }
        i++;
       }
    }
    if(isprime==0){
        printf("The number %d is not a prime number!",n);
    }
    else{
        printf("The number %d is a prime number!",n);
    }
    return 0;
}