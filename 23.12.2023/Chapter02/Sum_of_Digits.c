#include <stdio.h>
 int main(){
    int num;
    printf("Enter a five digit number : ");
    scanf("%d",&num);
    int temp=num;
    int digitSum=0;
    int digit;
    while(temp>0){
        digit=temp%10;
        digitSum=digitSum+digit;
        temp=temp/10;
    }
    printf("Digit Sum of %d is %d.",num,digitSum);
    return o;
 }