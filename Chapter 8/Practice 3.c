// 3. Write your own version of strlen function from <string.h>

#include<stdio.h>
int mystrlen(char ch[]){
    char c;
    int i=0;
    c=ch[i];
    while(c!='\0'){
        c=ch[i];
        i++;
    }
    int count=i-1;
    return count;
}
int main(){
    // char ch[]="Rafi";
    // printf("%d",mystrlen("Misbah"));
    char ch[100];
    scanf("%s",ch);
    printf("%d",mystrlen(ch));
    return 0;
}