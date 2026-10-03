#include <stdio.h>

int main(){
    
    for(int x=1; x<=5; x++){
    for(int i=1; i<=5;i++){
        i==x ? printf("1"):printf("0");
    }
    printf("\n");
    }

    return 0;
}