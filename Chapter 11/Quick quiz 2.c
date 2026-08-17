// Write a program to create an array of size n using calloc where n is an integer entered by the use

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    // int arr[n]; //Not allowed in C
    ptr[0] = 3;
    printf("%d", ptr[0]);

    return 0;
}