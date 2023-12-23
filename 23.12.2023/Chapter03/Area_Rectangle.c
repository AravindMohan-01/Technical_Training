#include<stdio.h>

int main(){
    int l,b;
    printf("Enter the lenght and breadth of the rectangle : ");
    scanf("%d%d",&l,&b);
    if((l*b)>(2*(l+b))){
        printf("Area is greater than perimeter of the rectangle");
    }
    else{
        printf("Perimeter is greater than area of the rectangle");
    }
    return 0;
}