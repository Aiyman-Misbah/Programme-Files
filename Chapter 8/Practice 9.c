// 9. Write a program to check whether a given character is present in a string or not.

#include<stdio.h>
#include<string.h>


int main(){
    char c = 'l';
    int contains = 0;
    char str[] = "I am Mohammad Aiyman Misbah";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            contains = 1;
            break;
        }
    }
    if(contains){
        printf("Yes,it contains \n");
        
    }
    else{
        printf("It doesn't contain \n");

    }
    
        
    return 0;
}
