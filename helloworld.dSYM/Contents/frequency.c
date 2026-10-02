#include<stdio.h>
int main(){
int n,j;
int i,count=0;
printf("enter value for n");
scanf("%d", &n);

    int num[n];
    for ( i = 0; i < n; i++)
    {       printf("enter value for array");
        /* code */scanf("%d", &num[i]);
        
    }
    for ( i = 0; i < n; i++)
    {
        /* code */for (j = 0; j< n; j++)
        {             
            /* code */if (num[i]==num[j])
            {
                /* code */count++;
              
            }
            
        }
          printf("%d is repeated %d times", num[i],count);
                printf("\n");
        
        
        
        
        count=0;
        
    }
  



return 0;
}