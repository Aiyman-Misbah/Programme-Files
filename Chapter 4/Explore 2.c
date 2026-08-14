#include<stdio.h>

int main(){
     int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==5){
            continue;//Skip the iteration now!!
        }
        printf("%d\n",i);
    }
    return 0;
}