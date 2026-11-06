#include<stdio.h>
int main(){
    int a[] = {3, 9, 1, 7, 2};
    for (int i = 0; i <4 ; i++)
    {
        /* code */for (int j = 0; j <4-i ; j++)
        {
            /* code */if (a[j]>a[j+1])
            {
                /* code */int temp = a[j];
                          a[j] = a[j+1];
                          a[j+1] = temp;
            }
            
        }
        
    }

for (int i = 0; i < 5; i++)
{
    /* code */printf("%d\t", a[i] );
}


    return 0;
}