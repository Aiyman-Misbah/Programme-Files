// 3. Solve problem 1 using calloc()
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=6;
    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));
    ptr[0]=5;
    ptr[1]=8;
    ptr[2]=9;
    ptr[3]=19;
    ptr[4]=590;
    ptr[5]=50;
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    return 0;
}