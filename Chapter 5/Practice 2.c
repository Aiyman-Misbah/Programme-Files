//2. Write a function to convert Celsius temperature into Fahrenheit. 
#include<stdio.h>
double convert(double);

double convert(double c){
    return ((c*9)/5.0)+32;
}
int main(){
    double c;
    printf("Enter the celsius value :");
    scanf("%lf",&c);
    printf("The fahrenheit value is %.2lf",convert(c));
    return 0;
}