//Break statement.

#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==5){
            break;//Exit the loop now!!
        }
        printf("%d\n",i);
    }
    return 0;
}