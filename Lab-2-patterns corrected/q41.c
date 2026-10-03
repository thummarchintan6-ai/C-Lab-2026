#include <stdio.h>

int main(){

        for(int j=1 ;j<=4 ; j++){
            for(int y=4-j ; y>0 ;y-- ){printf(" ");}
            for(int i=1 ; i<=j ;i++){
                printf("%d",i);
                if(i==j){
                    for(int x=j-1 ; x>0 ;x--){
                    printf("%d",x);
                    }

                }
            
            }
        printf("\n");
        }

    return 0;
}