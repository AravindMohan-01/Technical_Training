#include<stdio.h>

int main(){
    float tempFr;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&tempFr);
    printf("Temperature in Celsius : %.2f",(tempFr-32)*((float)5/9));
    return 0;
}