// 10. Solve problem 9 for time using ‘typedef’ keyword.

#include <stdio.h>
typedef struct date
{
    int mm;
    int dd;
    int yyyy;
} dt;
int compare(dt d1, dt d2)
{
    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd)
    {
        return 0;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;   
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    return 0;
}
int main()
{
    dt d1 = {10, 30, 2026};
    dt d2 = {10, 27, 2026};
    printf("%d \n", compare(d1, d2));

    return 0;
}
