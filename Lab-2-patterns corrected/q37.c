#include <stdio.h>

int main(){

        for(int j=1 ;j<=5 ; j++){
            for(int y=5-j ; y>0 ;y-- ){printf(" ");}
            for(int i=1 ; i<=j ;i++){
                printf("%d",i);
            }
        printf("\n");
        }

    return 0;
}