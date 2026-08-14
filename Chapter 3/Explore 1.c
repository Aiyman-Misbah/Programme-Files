#include <stdio.h>

int main()
{
    /*int age=65;
    if(age>60){
        printf("You can drive and you are a senior citizen.\n");
    }
    if(age>40){
        printf("You can drive and you are elder.\n");
    }
    if(age>18){
        printf("You can drive.\n");
    }
    else{
        printf("You cannot drive.\n");
    }*/
    // Here according to the age,every single if statement get executed.
    /*Output will be line 6,9 and 12*/
    // To prevent that we use "else if"!!
    int age = 65;
    if (age > 60)
    {
        printf("You can drive and you are a senior citizen.\n");
    }
    else if (age > 40)
    {
        printf("You can drive and you are elder.\n");
    }
    else if (age > 18)
    {
        printf("You can drive.\n");
    }
    else
    {
        printf("You cannot drive.\n");
    }
    return 0;
}