//2. Write a program to print multiplication table of 10 in reversed order. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d X %d =%d\n",n,i,n*i);
    }
    return 0;
}
//Or:
/*
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d X %d =%d\n",n,i,n*i);
    }
    return 0;
}
*/
//Or:
 /*
#include<stdio.h>

int main(){
    int i,n,mul;
    printf("Enter the number :");
    scanf("%d",&n);
    i=n;
    while (i>0)
    {
        mul=n*i;
        printf("%d x %d = %d\n",n,i,mul);
        i--;
    }
    return 0;
}
*/ 