#include<stdio.h>
int main(){
int a,b,c,d,e;
float f;
printf("Enter marks in Sub 1 : ");
scanf("%d",&a);
printf("Enter marks in Sub 2 : ");
scanf("%d",&b);
printf("Enter marks in Sub 3 : ");
scanf("%d",&c);
printf("Enter marks in Sub 4 : ");
scanf("%d",&d);
printf("Enter marks in Sub 5 : ");
scanf("%d",&e);
f = (a+b+c+d+e)/5;
printf("Percentage : %f\n",f);
return 0;
}