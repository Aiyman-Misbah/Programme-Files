/*
4. Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice. 
*/


#include<stdio.h>
char* slice(char ch[],int m,int n){
    char *ptr1 = &ch[m];
    // char *ptr2 = &ch[n];
    ch = ptr1;
    ch[n] = '\0';
    return ch;
    
    
}
int main(){
    char ch[]="HelloWorld";
    printf("%s",slice(ch,1,5));
    
    return 0;
}