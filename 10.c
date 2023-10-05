#include<stdio.h>
int main(){
    int a,i,fact;
    printf("Enter The number of which you want the factorial : ");
    scanf("%d",&a);
    fact=1;
    for (i=1;i<=a;i++){
        fact= fact*i;
    }
    printf("Factorial is : %d",fact);

}