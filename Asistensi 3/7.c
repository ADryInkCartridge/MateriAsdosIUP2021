#include <stdio.h>

int main()
{
    float initial, fuel, tax, total = 0;
    scanf("%f %f %f", &initial, &fuel, &tax);
    total = total + initial + fuel * 5;
    total = tax * 5 * initial;
    total += initial;
    printf("%f\n", total);
}