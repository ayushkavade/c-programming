#include<stdio.h>
int main(void){

int largest = -100000;
int smallest = 1000;
int countl = 0;
int n, i, total=0;
printf("enter value for n");
scanf("%d", &n);
int x;



for ( i = 0; i < n ; i++)
{
  printf("enter transaction amount here");
  scanf(" %d", &x);
  total = total +x;
  if (x>20000)
  {
    /* code */countl++;
    if (x>largest)
    {
      /* code */largest = x;
    }
    
    if (countl==3)
    {
      /* code */printf("FRAUD RECIEW REQUIRED \n");
                break;

                   
            
    }
    


  }else 
    countl = 0;
  
}printf("largest transaction :%d\n", largest);
 printf("total transaction value :%d", total);
 



return 0;


}