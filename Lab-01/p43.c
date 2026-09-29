#include <stdio.h>
int main(){
    float  a;
    printf("enter sells amount :");
    scanf("%f",&a);
    if(a>=0 && a<=500){printf("commition :%f",a*0.05);}
    else if (a>500 && a<=2000){printf("commition :%f",35 + (a-500)*0.1 );}
    else if (a>2000 && a<=5000){printf("commition :%f",185 + (a-2000)*0.12 );}
    else if (a>5000 ){printf("commition :%f",a*0.125 );}
  
return 0;
} 