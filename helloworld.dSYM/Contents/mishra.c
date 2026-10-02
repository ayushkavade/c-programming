#include <stdio.h>

int main(void)
{
    int a[100], done[100] = {0};
    int n, i, j, count;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (done[i])
            continue;          /* this value was already reported */

        count = 1;             /* a[i] itself is one occurrence */

        for (j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                count++;
                done[j] = 1;   /* mark this copy so it's not counted again */
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}