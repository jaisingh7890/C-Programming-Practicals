
#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0, count = 0, temp;

    scanf("%d", &n);

    original = n;
    temp = n;

    if (n < 0)
    {
        printf("Not Armstrong");
        return 0;
    }

    // Count the number of digits
    do
    {
        count++;
        temp = temp / 10;
    } while (temp != 0);

    temp = n;

    // Calculate the sum of digits raised to count
    do
    {
        digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;

    } while (temp != 0);

    if (sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
