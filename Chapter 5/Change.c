/*
#include<stdio.h>
int change(int);
int change(int a){
    a=77;//Misnomer
    return 0;
}


int main(){
    int b=22;
    change(b);//The value of b remains 22,change will only get the value '22',it won't change the value of b to 77.
    printf("%d",b);
    
    return 0;
}
*/
//How to actually make the function work:
#include<stdio.h>
int change(int);
int change(int a){
    a=77;
    return a;
}


int main(){
    int b=22;
    b=change(b);
    printf("%d",b);
    
    return 0;
}