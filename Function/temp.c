#include<stdio.h>
int temp(int c);
void main(){
    int F,C;
    printf("Enter temperature in degree C");
    scanf("%d",&C);
    F=temp(C);
    printf("Temperature in degree F is %d ", F);
}
int temp(int x){
    int t;
    t=(1.8*x)+32;
    return t;
}
