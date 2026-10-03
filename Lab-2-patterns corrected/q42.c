#include <stdio.h>

int main(){
    
    for(int x=0; x<5; x++){
        for(int y=5-x; y>0; y--){
            printf(" ");
        }
        for(int z=0; z<(2*x-1); z++){
            printf("*");
        }
        printf("\n");
    }
    for(int x=1; x<5; x++){
        for(int y=0; y<=x; y++){
            printf(" ");
        }
        for(int z=0; z<(2*(4-x)-1); z++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}