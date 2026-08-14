#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Misbah";
    char s1[56] = "Aiyman";
    char s2[56] = " Misbah";
    printf("%llu\n", strlen(st));
    
    char target[30];
    strcpy(target, st); // target now contains "Misbah"
    printf("%s %s\n",st,target);

    strcat(s1,s2); // s1 now contains "AiymaMisbah" <no space in between>
    printf("%s\n",s1);

    int a = strcmp("deep","joke");//DJ is negative.
    printf("%d\n",a);
    a = strcmp("joke","deep");
    printf("%d\n",a);
    
    return 0;
}