#include<stdio.h>

int main(){
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    //Leap year hobe jodi akta year 4 dara bivajjo hoy and 100 dara vibajjo na hoy!!
    if(year%4==0 && year%100!=0){
        printf("This year %d is Leap year!",year);
    }
    else{
        printf("This year %d is  not Leap year!",year);
    }
    return 0;
}