#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float s,area;
    printf("Enter the side of triangle : ");
    scanf("%d",&a);
    printf("Enter the side of triangle : ");
    scanf("%d",&b);
    printf("Enter the side of triangle : ");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the given triangle : %.2fcm2",area);
    return 0; 
}