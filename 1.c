#include<stdio.h>
int main(){
    float rad,area,cir;
    printf("Enter the radius of the circle : ");
    scanf("%f",&rad);
    area = 3.14*rad*rad;
    cir = 2*3.14*rad;
    printf("Area of Circle is : %f\n",area);
    printf("Circumference of Circle is : %f\n",cir);
    return 0;
    
}