#include<stdio.h>

int main(){
    long long a,b;
    while(scanf("%lld %lld",&a,&b) == 2){
        if(a<b){
            printf("%lld\n",(-1)*(a-b));
            
        }
        else{
            printf("%lld\n",(a-b));

        }
    }
    return 0;
}