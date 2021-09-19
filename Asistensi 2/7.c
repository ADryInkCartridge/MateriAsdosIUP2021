#include <stdio.h>
#define barrel 42
#define btu 5800000
int main()
{
    long long galons, answer;
    long long eff;
    scanf("%lld %lld", &galons, &eff);
    answer = galons / barrel * eff / 100 * btu;
    printf("%lld", answer);
}