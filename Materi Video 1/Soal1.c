int main()
{
    int a, c;
    char b;
    int answer;
    scanf("%d %c %d", &a, &b, &c);
    if (b == '*')
    {
        answer = a * c;
    }
    else if (b == '/')
    {
        answer = a / c;
    }
    else if (b == '-')
    {
        answer = a - c;
    }
    else if (b == '+')
    {
        answer = a + c;
    }
    printf("%d\n", answer);
}