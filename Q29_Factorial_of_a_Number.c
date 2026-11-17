
#include <stdio.h>

int main()
{
    int n;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        printf("%llu", factorial);
    }

    return 0;
}
