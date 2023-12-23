#include<stdio.h>

int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the first coordinates : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the second coordinates : ");
    scanf("%f%f",&x2,&y2);
    printf("Enter the third coordinates : ");
    scanf("%f%f",&x3,&y3);
    if(((y2-y1)/(x2-x1))==((y2-y3)/(x2-x3))){
        printf("All three points are on the same line.");
    }
    else{
        printf("All three points are not on the same line.");
    }
    return 0;
}