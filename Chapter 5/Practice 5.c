#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 4 5 5
    // 6 6 4
    // Both answers are correct
    return 0;
}