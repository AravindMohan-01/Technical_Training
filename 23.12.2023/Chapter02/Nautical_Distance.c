#include <stdio.h>
#include <math.h>

int main(){
    int l1,l2,g1,g2;
    printf("Enter L1 : ");
    scanf("%d",&l1);
    printf("Enter L2 : ");
    scanf("%d",&l2);
    printf("Enter G1 : ");
    scanf("%d",&g1);
    printf("Enter G2 : ");
    scanf("%d",&g2);
    float dist=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g2-g1));
    printf("Nautical Distance : %.2f",dist);
    return 0;
}