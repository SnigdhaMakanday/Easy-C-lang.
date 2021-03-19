#include<stdio.h>
void main(){
    int i = 1,z, s=0;
    for(i=1;i<=10;i++){
        z=8*i;
        s=s+z;
    }
    printf("Sum of numbers in the table of 8 = %d ",s);
}
