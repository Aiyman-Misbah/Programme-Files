#include<stdio.h>
int sum(int,int);
int sum(int a,int b){
    a=6;//sum fuction can't change 'x' using 'a' because a copy of 'x' is provided to 'a'
    return a+b;
}
int main(){
    int x=1,y=6;
    printf("The sum of 1 and 6 is %d\n",sum(x,y));
    printf("The value of x is %d\n",x);
    return 0;
}

