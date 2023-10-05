#include<stdio.h>
int main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d",&num);
    printf("Number to the power 1 is : %d\n",num);
    printf("Number to the power 2 is : %d\n",num*num);
    printf("Number to the power 3 is : %d\n",num*num*num);
    return 0;
}