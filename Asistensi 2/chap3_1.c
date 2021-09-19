#include <stdio.h>
#include <math.h>
#include <string.h>

double calculate()
{
    double pp, dp, interest, n;
    scanf("%lf %lf %lf %lf", &pp, &dp, &interest, &n);
    double monthint = interest / 12 / 100;
    double price = pp - dp;
    double payment = (monthint * price) / (1 - pow((1 + monthint), -1 * n));
    return payment;
}

int main()
{
    double pay = calculate();
    printf("$%.2lf\n", pay);
    double salary;
    scanf("%lf", &salary);
    double hour = ceil(pay / salary);
    printf("%lf", hour);
}
