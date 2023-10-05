#include<stdio.h>
int main()
{
  int a,b,c,lar;
  printf("\n Enter the three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
      if(a>c)
      {
          lar = a;
      }
      else
      {
          lar = c;
      }
  }
  else
  {
      if(b>c)
      {
          lar = b;
      }
      else
      {
          lar = c;
      }
  }
  printf("\n Biggest number is: %d",lar);
}