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
    if(num==revNum){
        printf("The number and the reverse of it are same.");
    }
    else{
        printf("The number and the reverse of it are not same.");
    }
    return 0;
}