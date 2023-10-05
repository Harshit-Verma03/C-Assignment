#include<stdio.h>
int main ()
{
  int n1, n2;
  printf("Enter 1st no. : ");
  scanf("%d",&n1);
  printf("Enter 2nd no. : ");
  scanf("%d",&n2);
  if (n1 == n2)
    printf("both are equal");
  else if (n1 > n2) 
    printf("%d is greater", n1);
  else
    printf("%d is greater", n2);
  return 0;
}