#include<stdio.h>

int main(){
    int salary;
    float dearAll, rentAll;
    printf("Enter the salary : ");
    scanf("%d",&salary);
    int gross;
    gross=salary+(salary*0.4)+(salary*0.2);
    printf("Ramesh's Gross Salary : %d",gross);
    return 0;
}