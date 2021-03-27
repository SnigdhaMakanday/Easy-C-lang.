#include<stdio.h>
void sum_avg(int a,int b,int *s,float *avg);
void main(){
    int i,j,sum;
    float av;
    i=8;
    j=6; 
    sum_avg(i,j, &sum, &av);
    printf("Sum and Avg are %d,%f\n",sum,av);
}
void sum_avg(int a,int b,int *s,float *avg){
    int sum = a+b;
    *s=sum;
    float av = sum/2;
    *avg = av;
}
