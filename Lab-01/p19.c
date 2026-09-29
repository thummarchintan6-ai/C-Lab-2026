#include <stdio.h>
int main(){
    char ch;
    printf("charecter :");
    scanf("%c",&ch);
   ( ch>='A' && ch<='Z' )? printf("capital") :((ch>='a' && ch<='z') ? printf("small"):printf("wrong infomation") );


return 0;
} 