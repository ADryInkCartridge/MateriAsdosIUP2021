#include <stdio.h>

int main()
{
    char grade;
    float min_avg, curr_avg, perc;

    scanf("%c", &grade);
    scanf("%f %f %f", &min_avg, &curr_avg, &perc);

    float currAvg = curr_avg * (100 - perc) / 100;
    float finals = 0;
    finals = 100 / perc * (min_avg - currAvg);
    printf("%.2f\n", finals);
}