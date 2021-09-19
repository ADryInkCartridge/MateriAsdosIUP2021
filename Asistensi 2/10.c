#include <stdio.h>

int main()
{
    float x1, x2, y1, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float slope = (y2 - y1) / (x2 - x1);
    printf("%f\n", slope);
    float midx = (x2 + x1) / 2;
    float midy = (y2 + y1) / 2;
    printf("%f %f\n", midx, midy);
    float slope2 = -1 / slope;
    printf("%f\n", slope2);
    float b = midy - slope2 * midx;
    printf("y = %.2fx + %.2f", slope2, b);
}