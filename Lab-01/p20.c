#include <stdio.h>
int main(){
    float a,b;
    int x;
    char w='s';
    printf("enter 1 for sum:\n");
    printf("enter 2 for subtraction:\n");
    printf("enter 3 for multipication:\n");
    printf("enter 4 for divition:\n");
    printf("enter what=n for contine:\n");
    while(w!='n'){
    
    printf("enter nu.1 :");
    scanf("%f",&a);

    printf("enter nu.2 :");
    scanf("%f",&b);
    
    printf("enter num:");
    scanf("%d",&x);

    switch(x){
        case 1 :printf("%f + %f = %f\n",a,b,a+b);
        break;
        case 2 :printf("%f - %f = %f\n",a,b,a-b);
        break;
        case 3 :printf("%f * %f = %f\n",a,b,a*b);
        break;
        case 4 :printf("%f / %f = %f\n",a,b,a/b);
        break;
        default :printf("wrong info");
    }
    printf("what:");
    scanf("%c",&w);
    }

return 0;
} 