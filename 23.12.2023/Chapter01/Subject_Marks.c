#include <stdio.h>

int main(){
    float markSum=0;
    int mark;
    for (int i=0;i<5;i++){
        printf("Enter the mark : ");
        scanf("%d",&mark);
        markSum=markSum+mark;
    }
    printf("Aggregatge mark : %.2f \n",markSum);
    printf("Mark Percentage : %d%%", (int)((markSum/500)*100));
    return 0;
}