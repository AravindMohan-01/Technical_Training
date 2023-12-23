#include <stdio.h>

int main(){
    int aAge,rAge,sAge;
    printf("Enter Ajay's age : ");
    scanf("%d",&aAge);
    printf("Enter Ram's age : ");
    scanf("%d",&rAge);
    printf("Enter Shyam's age : ");
    scanf("%d",&sAge);
    if (aAge<rAge && aAge<sAge){
        printf("Ajay is the youngest among the three.");
    }
    else if (rAge<aAge && rAge<sAge){
        printf("Ram is the youngest among the three.");
    }
    else{
        printf("Shyam is the youngest among the three.");
    }
    return 0;
}