#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int hasil = x / y;
    int sisa = x % y;
    printf("masing-masing %d\n", hasil);
    printf("bersisa %d\n", sisa);
}