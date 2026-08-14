#include<stdio.h>
int sum(int,int);

int sum(int x,int y){
    //printf("The sum is %d\n",x+y);
    return x+y;
}

int main(){
    int a=2;
    int b=5;
    int c=sum(a,b);
    printf("%d\n",c);
    return 0;
}