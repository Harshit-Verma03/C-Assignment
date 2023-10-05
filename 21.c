
#include<stdio.h>
int main(){
    int n,i,n1,rev=0;
    printf("enter a no. : ");
    scanf("%d",&n);
    n1=n;
    for(n1; n1>0;n1=n1/10){
        i=n1%10;
        rev= (rev*10)+i;
    }
    printf("%d",rev);
}