#include<stdio.h>
int main(){
    int n1, i=0, rev=0,n;
    printf("Enter a no. :");
    scanf("%d",&n1);
    n=n1;

    while(n1>0){
        i= n1%10;
        rev= rev*10 + i;
        n1= n1/10;      
    }
   if(n==rev)
        printf("It is a palindrome number\n");
    else
    printf("The new number is : %d", rev);
     
}