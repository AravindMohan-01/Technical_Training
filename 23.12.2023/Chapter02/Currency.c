#include <stdio.h>
#include <math.h>
int main(){
    int amount;
    printf("Enter the amount : ");
    scanf("%d",&amount);
    int notes;
    int inter;
    int temp=amount;
    while (temp>0){
        if(temp>=100){
            inter=floor(temp/100);
            temp=temp%100;
            notes=notes+inter;
        }
        else if(temp>=50){
            inter=floor(temp/50);
            temp=temp%50;
            notes=notes+inter;
        }
        else if(temp>=10){
            inter=floor(temp/10);
            temp=temp%10;
            notes=notes+inter;
        }
        else if(temp>=50){
            inter=floor(temp/5);
            temp=temp%5;
            notes=notes+inter;
        }
        else if(temp>=2){
            inter=floor(temp/2);
            temp=temp%2;
            notes=notes+inter;
        }
        else{
            inter=floor(temp/1);
            temp=temp%1;
            notes=notes+inter;
        }
    }
    printf("Number of notes : %d.",notes);
    return 0;
}