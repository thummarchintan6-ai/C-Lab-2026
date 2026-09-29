#include <stdio.h>
int main(){
    char a;
    printf("charector :");
    scanf("%c",&a);

    if(a>='a' && a<='z'){printf("small case");}
    else if(a>='A' && a<='Z'){printf("capital case");}
    else if(a>='0' && a<='9'){printf("digit");}
    else {printf("spacial charecter");}
    
return 0;
} 