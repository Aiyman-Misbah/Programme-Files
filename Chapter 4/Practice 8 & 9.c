//9. Repeat 8 using while loop. 

/*
#include<stdio.h>

int main(){
    int n,i,mul=1;
    printf("Enter the number :");
    scanf("%d",&n);
    i=n;
    while(i>=1){
        mul=mul*i;
        printf("%d",i);
        if(i>1){
            printf("X");
        }
        i--;
    }
    printf("=%d",mul);
    return 0;
}
*/
//8. Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
    int n,i,mul=1;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        mul *=i;
        printf("%d",i);
        if(i>1){
            printf("X");
        }
    }
    printf("=%d",mul);
    return 0;
}