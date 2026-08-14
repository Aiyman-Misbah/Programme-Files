#include<stdio.h>

int main(){
    int marks[]={12, 14, 15, 90};
    int *ptr=&marks[0];
    //int *ptr=marks;//same as int *ptr=&marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n",i,marks[i]);
        printf("The value at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0;
}