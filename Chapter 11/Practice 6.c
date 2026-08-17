// 6. Attempt problem 4 using calloc().
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n , sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
        printf("7 X %d = %d\n",(i+1),ptr[i]);
    }
    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    
    
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
        printf("7 X %d = %d\n",(i+1),ptr[i]);
    }
    return 0;
}