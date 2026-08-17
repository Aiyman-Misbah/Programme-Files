// 5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15). 
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10,mul;
    int *ptr;
    ptr = (int *)calloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        ptr[i]=i+1;
        mul = 7 * ptr[i];
        printf("7 X %d = %d",(i+1),mul);
    }
    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    
    
    for (int i = 0; i < n; i++)
    {
        ptr[i]=i+1;
        mul = 7 * ptr[i];
        printf("7 X %d = %d",(i+1),mul);
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    
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