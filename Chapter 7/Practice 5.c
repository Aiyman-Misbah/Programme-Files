#include<stdio.h>
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}
void reverse(int a[],int n){
    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;

    }
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    
    printarray(arr,8);
    reverse(arr,8);
    printarray(arr,8);
    return 0;
}