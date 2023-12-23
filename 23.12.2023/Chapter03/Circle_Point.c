#include<stdio.h>

int main(){
    int x,y,a,b;
    int rad;
    printf("Enter the center of the circle : ");
    scanf("%d%d",&x,&y);
    printf("Enter the radius of the circle : ");
    scanf("%d",&rad);
    printf("Enter the point to be checked : ");
    scanf("%d%d",&a,&b);
    if((a>=x && a<(x+rad)) && ((b>=y && b<(y+rad)))){
        printf("Point inside the circle");
    }
    else{
        printf("Points not inside the traingle");
    }
    return 0;  
}