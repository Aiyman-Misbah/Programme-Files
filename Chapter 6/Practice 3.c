//3. Write a program to change the value of a variable to ten times of its current value.


#include<stdio.h>
void change_ten_times(int*);

void change_ten_times(int* a){
    *a = *a * 10;
}

int main(){
    int x=3;
    printf("The value of a is %d\n",x);
    change_ten_times(&x);
    printf("The value of a is %d\n",x);

    return 0;
}