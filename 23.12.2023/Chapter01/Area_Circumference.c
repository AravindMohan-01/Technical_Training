#include<stdio.h>

int main(){
    int l,b,r;
    printf("Enter Length of the Rectangle in cm: ");
    scanf("%d",&l);
    printf("Enter Breadth of the Rectangle in cm: ");
    scanf("%d",&b);
    printf("Area of the Rectangle : %d cm2\n",l*b);
    printf("Perimeter of the Rectangle : %d cm\n",2*(l+b));
    printf("Enter Radius of the circle in cm: ");
    scanf("%d",&r);
    printf("Area of the Circle : %.2f cm2\n",(3.14*r*r));
    printf("Circumference of the Rectangle : %.2f cm",(2*3.14*r));
    return 0;
}