#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the points : ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("Point lies on the origin.");
    }
    else if (x==0){
        printf("Point lies on the x-axis.");
    }
    else if(y==0){
        printf("Point lies on the y-axis.");
    }
    else{
        printf("Point lies elsewhere.");
    }
    return 0;
}