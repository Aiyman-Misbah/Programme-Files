//Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order.

#include<stdio.h>

int main(){
    int i;
    printf("Enter the number :");
    scanf("%d",&i);
    for(;i;i--){
        printf("%d\n",i);
    }
    return 0;
}