#include<stdio.h>

int main(){
    int cgpa[3] = {9, 8, 8}; // arrays can be initialized while declaration
    //int cgpa[] = {9, 8, 8};//same as before.
    for(int i=0;i<3;i++){
        printf("The value at index %d is %d\n",i,cgpa[i]);
    } 
    return 0;
}