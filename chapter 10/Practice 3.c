// 3. Write a program to read a text file character by character and write its content twice in separate file.
#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("../misbah.txt", "r");
    ptr2 = fopen("../misbah2.txt", "w");
    while (1)
    {
        ch = fgetc(ptr1); // when all the content of a file has been read break the loop !
        
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
            printf("%c",ch);
        }
    }
    return 0;
}