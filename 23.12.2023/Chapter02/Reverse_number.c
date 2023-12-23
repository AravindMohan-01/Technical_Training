#include <stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp=num;
    int digit,revNum=0;
    while(temp>0){
        digit=temp%10;
        revNum=(revNum*10)+digit;
        temp=temp/10;
    }
    printf("Reverse of %d is %d.",num,revNum);
    return 0;
}