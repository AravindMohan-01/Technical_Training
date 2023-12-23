#include<stdio.h>

int main(){
    int salesPrice,costPrice;
    printf("Enter the sales price : ");
    scanf("%d",&salesPrice);
    printf("Enter the cost price : ");
    scanf("%d",&costPrice);
    if (salesPrice>costPrice){
        printf("Seller earned profit of %d Rs.",salesPrice-costPrice);
    }
    else{
        printf("Seller made loss of %d Rs.",abs(costPrice-salesPrice));
    }
    return 0;
}