#include <stdio.h>

int main()
{
    char c;
    float a, b;

    printf("number 1 : ");
    scanf("%f", &a);

    printf("number 2 : ");
    scanf("%f", &b);

    printf("For sum enter : 1\n");
    printf("For subtraction enter : 2\n");
    printf("For multiplication enter : 3\n");
    printf("For division enter : 4\n");

    printf("number 3 : ");
    scanf(" %c", &c);

    switch(c)
    {
        case '1':
            printf("%f + %f = %f", a, b, a+b);
            break;

        case '2':
            printf("%f - %f = %f", a, b, a-b);
            break;

        case '3':
            printf("%f * %f = %f", a, b, a*b);
            break;

        case '4':
            printf("%f / %f = %f", a, b, a/b);
            break;

        default:
            printf("wrong info");
    }

    return 0;
}