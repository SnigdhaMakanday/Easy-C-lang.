#include<stdio.h>
int Avg(int a,int b,int c);
void main(){
    int avg;
    avg=Avg(4,6,8);
    printf("Average =%d",avg);
}
int Avg(int x,int y,int z){
    int avg;
    avg = (x+y+z)/3;
    return avg;
}
