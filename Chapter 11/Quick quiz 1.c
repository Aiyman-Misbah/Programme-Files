// Write a program to create a dynamic array of 5 floats using malloc(). 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // int arr[n]; //Not allowed in C
    ptr[0] = 3.33;
    ptr[1] = 6.5;
    ptr[2] = 90.23;
    ptr[3] = 77.677;
    ptr[4] = 56.656;

    printf("%.3f\n", ptr[0]);
    printf("%.3f\n", ptr[1]);
    printf("%.3f\n", ptr[2]);
    printf("%.3f\n", ptr[3]);
    printf("%.3f\n", ptr[4]);
    

    
    

    return 0;
}