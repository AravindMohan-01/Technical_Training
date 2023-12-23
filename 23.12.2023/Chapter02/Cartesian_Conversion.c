#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    printf("Enter the X coordinate : ");
    scanf("%d",&x);
    printf("Enter the Y coordinate : ");
    scanf("%d",&y);
    float r,pi;
    r=sqrt((x*x)+(y*y));
    pi=atan(y/x);
    printf("Polar Co-ordinates : (%.2f,%.2f)",r,pi);
    return 0;
}