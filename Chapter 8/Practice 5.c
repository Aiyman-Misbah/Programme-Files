// 5. Write your own version of strcpy function from <string.h>
#include<stdio.h>
void strcpy(char target[], char source[]);
int main(){
    char source[] = "Misbah";
    char target[30];
    strcpy(target, source);
    printf("%s %s\n",source,target);
    return 0;
}