// 9. Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>
struct date
{
    int mm;
    int dd;
    int yyyy;
};
int compare(struct date d1, struct date d2);
int compare(struct date d1, struct date d2)
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
    struct date d1 = {10, 27, 2006};
    struct date d2 = {10, 30, 2026};
    printf("%d \n", compare(d1, d2));

    return 0;
}
