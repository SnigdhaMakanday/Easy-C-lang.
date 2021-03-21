#include<stdio.h>
float Force(float m);
void main(){
    float F,m;
    printf("Enter the mass of the body");
    scanf("%f",&m);
    F=Force(m);
    printf("Force Exerted %f",F);
}
float Force(float x){
    float F;
    F=9.8*x;
    return F;
}
