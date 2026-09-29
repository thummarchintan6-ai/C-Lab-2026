#include <stdio.h>
int main(){
    float a;
    int b,x;
    printf("enter base :");
    scanf("%f",&a);

    printf("enter power :");
    scanf("%d",&b);
    x=a;
    if(b==0){a=1;}
    else if(b>0){
        for(int i=1; i<b;i++){
        a*=x;
        }
    }
    else if(b<0){
        a=1.0/x;
        for(int i=-1; i>b;i--){
            
            a*=1.0/x;
        }
    }
    printf("value is :%f",a);

  
return 0;
} 