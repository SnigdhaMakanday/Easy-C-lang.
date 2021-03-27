#include<stdio.h>
void change(int *a);
void main(){
    int a=5;
    printf("Value of a is %d\n",a);
    change(&a);
    printf("Value now is %d\n",a);
}
void change(int *a){
    int x;
    x=*a*10;
    printf("Value of a after changes is %d\n",x);
    *a=x;
}
