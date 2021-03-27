#include<stdio.h>
void printadd(int a);
void main(){
    int i=6;
    printadd(i);
    printf("Address of i now is %u\n",&i);
}
void printadd(int a){
    printf("Address of i is %u\n",&a);
}
