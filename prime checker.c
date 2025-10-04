#include <stdio.h>

int main()
{
    int n = 113;
    int cnt = 0;

    scanf("%d", &n);
    if (n <= 1)
    {
        printf("The number %d is NOT prime", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                cnt++;

    if (cnt > 2)
        printf("%d is NOT prime", n);
    else
        printf("%d is prime", n);
    return 0;
}
