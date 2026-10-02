#include<stdio.h>
int main(){

int N;
int count=0;
int i;
int n,j;
scanf("%d",&N);
for ( i = 1; i <= N; i++)
{
            for ( j = 2; i <N; i++)
            {
                /* code */if (i%j!=0)
            
                {
                    count++;
                    printf("%d ", i);

                }
                
                
            }
            
                        
                        
            
        }
        
 




return 0;

}