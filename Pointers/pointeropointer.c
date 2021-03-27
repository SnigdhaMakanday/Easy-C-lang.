#include<stdio.h>
void main(){
    int i=4;
    int *j;
    j=&i;
    int **k;
    k=&j;
    printf("Value of i = %d",**k);
}
