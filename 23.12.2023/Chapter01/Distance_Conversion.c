#include<stdio.h>

int main(){
    int distance;
    printf("Enter distance in KM : ");
    scanf("%d",&distance);
    printf("Distance in meters : %dm\n",distance*1000);
    printf("Distance in feet : %dft\n",distance*3281);
    printf("Distance in inches : %d inches\n",distance*39370);
    printf("Distance in centerimeter : %dcm",distance*100000);
    return 0;
}