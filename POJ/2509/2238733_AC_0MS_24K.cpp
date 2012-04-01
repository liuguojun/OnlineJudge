#include <stdio.h>
 
int main()
{
    unsigned int n, k, sum;
 
    while (EOF != scanf("%d%d", &n, &k))
    {
        sum = n;
        while (n / k)
        {
            sum += n / k;
            n = n / k + n % k;
        }
        printf("%d\n", sum);
    }
}

