#include <stdio.h>
int main(){
    int a,r,n=0;
    printf("enter number:");
    scanf("%d",&a);
    
    while(a>0){
        r=a%10;
        n=(n*10)+a;
        a=a/10;
    }
    printf("%d",n);
   
   
return 0;
} 