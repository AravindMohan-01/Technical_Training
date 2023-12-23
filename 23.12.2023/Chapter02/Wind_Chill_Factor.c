#include<stdio.h>
#include<math.h>

int main(){
    int t,v;
    printf("Enter temperature : ");
    scanf("%d",&t);
    printf("Enter wind velocity : ");
    scanf("%d",&v);
    float wcf = 35.74 + (0.6215*t) + ( (0.4275*t) - 35.75 ) * pow(v,0.16);
    printf("Wind Chill Factor : %.2f",wcf);
    return 0;
}