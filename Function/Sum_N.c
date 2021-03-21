#include<stdio.h>
int Sum(int n);
void main(){
    int n,s,i;
    printf("Enter the number u want sum of  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=Sum(i);
    }
    printf("%d",s);

}
int Sum(int x){
    if(x==1)
      return (1);
    return(x+Sum(x-1));
    
}
