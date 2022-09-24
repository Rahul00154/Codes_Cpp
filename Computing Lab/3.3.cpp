#include <stdio.h>



int main()

{

    long int n, k;

    scanf("%ld %ld", &n, &k);

    long long int a[n];

    long long int sum_s = 0, sum_l = 0, max = 0;

    for (long int i = 0; i < n; i++)

    {

        scanf("%lld", &a[i]);



        if (i >= (n - k))

            sum_l += a[i];

    }



    for (long int i = 0; i < k; i++)

    {

        sum_s += a[i];

        sum_l -= a[n - k + i];

        if (max < (sum_s + sum_l))

            max = sum_s + sum_l;

    }

    printf("%lld", max);

    return 0;

}