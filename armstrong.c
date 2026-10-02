
#include<stdio.h>
int main(){
int N,i,j,digit,cond;
scanf(" %d",&N);
for ( i = 1; i <= N; i++)
{
    j=i;
    cond = 0;   /* reset for every candidate */
    while (j>0)
    {
       digit = j%10;
       cond = cond+digit*digit*digit;
       j  = j/10;
    }
    if (cond == i)
    {
        printf("%d ", i);
    }
}
return 0;
}