#include<stdio.h>
void swap(int *a,int *b);
void main(){
    int x=3,y=4;
    printf("a and b before swap = %d ,%d\n",x,y);
    swap(&x,&y);
    printf("a and b after swap = %d,%d\n",x,y);
    
    
}
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
