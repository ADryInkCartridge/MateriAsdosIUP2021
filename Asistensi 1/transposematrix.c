#include <stdio.h>

int main()
{
    printf("DO WHILE\n");
    int i = 10;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);

    i = 10;
    printf("WHILE\n");
    while (i < 10)
    {
        printf("%d\n", i);
    }
}
