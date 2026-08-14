#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("misbah.txt", "a");
    // char c = fgetc(ptr);// used to read a character from file
    // printf("%c",c);
    fputc('L', ptr); // used to write character 'c' to the file
    return 0;
}