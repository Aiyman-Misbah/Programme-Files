//5. Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>

int main(){
    int i=1,sum=0;
    while(i<=10){
        sum+=i;
        printf("%d",i);
        if(i<10){
            printf("+");
        }
        i++;
       
    }
    printf("=%d",sum);
    return 0;
}