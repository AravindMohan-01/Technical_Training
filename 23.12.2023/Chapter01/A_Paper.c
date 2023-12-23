#include <stdio.h>

int main(){
    int a,b,temp;
    a,b=1189,841;
    for(int i=0;i<9;i++){
        printf("A%d Size : %dmm x %dmm\n",i,a,b);
        temp=a;
        a=b;
        b=temp/2
    }
    retrun 0;
}