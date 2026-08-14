//10. Write a program to check whether a given number is prime or not using loops.

/*
#include<stdio.h>

int main(){
    int i,n,rem;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        rem=n%i;
        if(rem==0){
            break;
        }
    }
    if(rem==0){
        printf("The number %d is not a prime number!",n);
    }
    else{
      printf("The number %d is a prime number!",n);  
    }
    return 0;
}
*/

//Cleaner Approach:
#include<stdio.h>

int main(){
    int i,n,prime=1;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n<=1){
        prime=0;
    }
    else{
       for(i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
       }
    }
    if(prime==0){
        printf("The number %d is not a prime number!",n);
    }
    else{
        printf("The number %d is a prime number!",n);
    }
    return 0;
}