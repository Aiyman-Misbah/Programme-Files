#include <stdio.h>
#include <string.h>

struct employee 
{ 
    int code; // This declares a new user defined data type! 
    float salary; 
    char name[10]; 
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[0].salary = 1000.9;
    strcpy(facebook[0].name,"Misbah");
    facebook[1].code = 101;
    printf("%d %d %f %s\n",facebook[0].code,facebook[1].code,facebook[0].salary,facebook[0].name);
    struct employee Aiyman = {2504088,50000.99,"Misbah"};
    printf("%d %f %s\n",Aiyman.code,Aiyman.salary,Aiyman.name);
    // And so on
    return 0;
}