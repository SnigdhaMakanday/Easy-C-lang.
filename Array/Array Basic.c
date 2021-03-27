#include<stdio.h>
void main(){
    int marks[5];
    int i;
    for(i=0;i<5;i++){
        printf("Marks of Student %d is :\n",i+1,marks[i]);
        scanf("%d",&marks[i]);
    }
    for (i=0;i<5;i++){
        printf("Marks for Student %d is %d\n",i+1,marks[i]);
    }
}
