#include <stdio.h>
#include <math.h>
#define pi 3.14159265
#define e 2.7182818

int main()
{
    float n, ans;
    scanf("%f", &n);
    ans = pow(n, n) * pow(e, -1 * n) * sqrt((2 * n + 1 / 3) * pi);
    printf("%.5f", ans);
    if (ans > 100)
    {
        printf("a");
    }
    else if (ans > 10)
    {
        printf("b");
    }
    else
    {
        printf("c");
    }
}
