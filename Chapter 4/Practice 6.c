//6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 

/*
#include<stdio.h>

int main(){
    int i=1,n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(;i<=n;i++){
        sum=sum+i;
        printf("%d",i);
        if(i<n){
            printf("+");
        }
    }
    printf("=%d",sum);
    return 0;
}
*/


#include<stdio.h>

int main(){
    int i=1,n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    do{
        sum=sum+i;
        printf("%d",i);
        if(i<n){
            printf("+");
        }
        i++;
    }
    while(i<=n);
    printf("=%d",sum);
    return 0;
}