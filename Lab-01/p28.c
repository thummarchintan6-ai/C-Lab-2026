#include <stdio.h>

int main()
{
    int num, original, digit, count = 0;
    int sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    num = original;

    while (num != 0)
    {
        digit = num % 10;

        power = 1;

        for (i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        num = num / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}