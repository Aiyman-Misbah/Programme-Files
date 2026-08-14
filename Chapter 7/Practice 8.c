// 8. Repeat problem 7 for a custom input given by the use
#include<stdio.h>

int main(){
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int arr[3][10];
    int mul[]={n1,n2,n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=mul[i] * (j+1);
        }
        
        
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d X %d = %d \n",mul[i],(j+1),arr[i][j]);
            
        }
        printf("\n");
        
        
    }
    
    return 0;
}