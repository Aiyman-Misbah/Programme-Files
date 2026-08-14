#include<stdio.h>


//Function Prototype.
int sum(int,int);

//Function Definition.
int sum(int x,int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=4;
    int b=2;
    // int c=a+b;
    // printf("The sum is %d\n",c);
    int c = sum(a,b);//Function call.
    printf("%d\n",c);//The return value of sum function will be stored in c and will get printed.
    
    int a1=20;
    int b1=21;
    // int c1=a1+b1;
    // printf("The sum is %d\n",c1);
    int c1 = sum(a1,b1);//Function call.
    printf("%d\n",c1);//The return value of sum function will be stored in c1 and will get printed.

    int a2=40;
    int b2=50;
    // int c2=a2+b2;
    // printf("The sum is %d\n",c2);
    sum(a2,b2);//Function call.
    
    int a3=47;
    int b3=50;
    // int c3=a3+b3;
    // printf("The sum is %d\n",c3);
    sum(a3,b3);//Function call.    
    
    



    return 0;
}