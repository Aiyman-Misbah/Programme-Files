// 2. Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
#include<stdio.h>

int main(){
    FILE *ptr;
    int num=4;
    ptr = fopen("../file.txt", "w");
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d",num*(i));
        fprintf(ptr,"%c",'\n');
    }
    return 0;
}

