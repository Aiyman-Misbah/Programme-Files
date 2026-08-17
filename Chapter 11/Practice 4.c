// 4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Output\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Output\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}