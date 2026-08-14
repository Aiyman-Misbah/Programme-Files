#include <stdio.h>

int main()
{
   int a;
   printf("Enter a :");
   scanf("%d", &a);
   /*switch (a){
       case 1:
          printf("You entered 1\n");
       case 2:
          printf("You entered 2\n");
       case 3:
          printf("You entered 3\n");
       case 4:
          printf("You entered 4\n");
       default:
          printf("Nothing matched\n");
   }*/
   /*Output:
   Enter a :1
        You entered 1
        You entered 2
        You entered 3
        You entered 4
        Nothing matched*/
   switch (a)
   {
   case 1:
      printf("You entered 1\n");
      break;
   case 2:
      printf("You entered 2\n");
      break;
   case 3:
      printf("You entered 3\n");
      break;
   case 4:
      printf("You entered 4\n");
      break;
   default:
      printf("Nothing matched\n");
      break;
   }
   /*output:
   Enter a :1
      You entered 1*/
   return 0;
}