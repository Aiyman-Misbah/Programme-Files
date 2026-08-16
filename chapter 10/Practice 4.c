/*
4. Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    char name1[35], name2[35];
    int salary1, salary2;
    ptr = fopen("../info.txt", "w");

    printf("Enter the name of the employee \n");
    scanf("%s", name1);

    printf("Enter the salary of the employee \n");
    scanf("%d",&salary1);

    printf("Enter the name of the employee \n");
    scanf("%s", name2);

    printf("Enter the salary of the employee \n");
    scanf("%d",&salary2);

    fprintf(ptr,"%s","i.");
    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%c",'\n');

    fprintf(ptr,"%s","ii.");
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary2);
    fprintf(ptr,"%c",'\n');
    
    

    return 0;
}