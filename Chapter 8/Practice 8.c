// 8. Write a program to count the occurrence of a given character in a string. 

#include<stdio.h>
#include<string.h>


int main(){
    char c = 'm';
    int count = 0;
    char str[] = "I am Mohammad Aiyman Misbah";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count ++;
        }
    }
    printf("%d",count);
        
    return 0;
}
