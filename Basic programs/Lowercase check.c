#include<stdio.h>
void main(){
    char c;
    printf("Enter the char");
    scanf("%c",&c);
    if(c<=122 && c>=97){
        printf("Lowercase character");
    }
    else{
        printf("Not in Lowercase");
    }

}
