// Create a two-dimensional vector using structures in C.

#include<stdio.h>
struct vector{
    int i;
    int j;
};
int main(){
    // struct vector v;
    // v.i=2;
    // v.j=3;
    // printf("The vector v is %di + %dj",v.i,v.j);
    struct vector v = {2,3};
    printf("The vector v is %di + %dj",v.i,v.j);
    return 0;
}