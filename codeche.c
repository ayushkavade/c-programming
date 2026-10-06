#include <stdio.h>
int main()
{
    int t, i, j, n, count = 0, k,a=0;
    char s[1000];
    char s1[7] = "aeiou";
    scanf("%d", &t);

    scanf("%s", &s[t+1]);
    for (j = 0; j < t; j++)
    {
        /* code */ for (k = 0; k < 5; k++)
        {
            /* code */ if (s1[k] != s[j])
            {   
                /* code */ count++;
                if (count>=20)
                {
                    /* code */a=1;
                    
                }
                
            }
            else
                count = 0;
            
        }
    }
    if (a!=0)
    {
        /* code */ printf("no\n");
    }
    else
        printf("yes\n");
    return 0;
}