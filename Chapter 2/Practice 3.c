#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    if (a % 97 == 0)
    {
        printf("The number %d is divisable by 97", a);
    }
    else
    {
        printf("The number %d is not divisable by 97", a);
    }
    return 0;
}