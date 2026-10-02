#include<stdio.h>
int main(void){
    int n;

scanf("%d", &n);

int num[n];
int num1[n];
int i,j;
for ( i = 0; i < n; i++)
{
    /* code */scanf("%d",&num[i]);
}
for ( i = 0; i <n; i++)
{
    /* code */scanf("%d",&num1[i]);

}
for ( i = 0; i < n; i++)
{
    /* code */for ( j = 0; j < n; j++)
    {
        /* code */if (num[j]==num1[i])
        {
            /* code */printf("%d\t", num[j]);
        }
        
    }
    
}

return 0;

}