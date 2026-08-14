#include<stdio.h>
double Gforce(double);

double Gforce(double mass){
       return mass*9.8;
}
int main(){
    double m;
    printf("Enter the mass :");
    scanf("%lf",&m);
    printf("The weight of the mass %.2lf is %.2lf",m,Gforce(m));
    return 0;
}