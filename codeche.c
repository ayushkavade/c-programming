#include <stdio.h>

int main()
{
    // your code goes here
    int T, N, i, j, k, count = 0;
    char s2[6] = "aeiou";
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {

        scanf("%d", &N);
        char s[N];

        scanf("%(N-1)s", s);

        for (j = 0; j < N; j++)
        {

            for (k = 0; k < 6; k++)
            {
                if (s[j] != s2[k])
                {

                    count++;
                }
                else
                    count = 0;
            }
        }

        if (count == 3)
        {

            printf("yes\n");
        }
        else
            printf("no\n");
        count = 0;
    }
    return 0;
}