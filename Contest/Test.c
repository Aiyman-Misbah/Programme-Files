#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int isprime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            sum=sum+i;
        }

    }
    printf("%d",sum);
    
    return 0;
}