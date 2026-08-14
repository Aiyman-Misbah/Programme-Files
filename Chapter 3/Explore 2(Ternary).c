#include <stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false
    // Here "?" and ":" are called Ternary Operators
    //It's a shorthand of if else!
    int a=123;
    int b=897654;
    a>b?printf("a is greater!!"):printf("b is greater!!");
    return 0;
}