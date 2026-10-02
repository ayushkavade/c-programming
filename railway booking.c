#include <stdio.h>
int main(){
int n, x, accepted=0, rejected=0, total=0, largest=-100;
int a=0,i,s;
int remaining;
printf("enter value for s");

scanf("%d", &s);
printf("enter value for n");
scanf("%d", &n);
remaining=s;
for ( i = 0; i < n; i++)
{ printf("enter value for how many seats do you want\n :");
            scanf(" %d", &x);
    /* code */if (x<s)
    {      

        /* code */remaining=remaining-x;
        total = total+x;
        accepted++;
        printf("your seat is accepted");
        if (remaining<= (0.1)*s)
        {
            /* code */if (a==0)
            {
                /* code */a=i;
            }
            
        }
        
        
        if (x>largest)
        {
            /* code */largest = x;

        }
        

    }else
    rejected++;
    printf("\n");
    continue;

    
}

printf("total accepted requests are :%d\n", accepted);
printf("total rejected request are :%d\n", rejected);
printf("total seats booked are :%d\n", total);
printf("largest accepted request is :%d\n", largest);
printf("you first number of request for which seats remaining 10 percent less is :%d",a);
return 0;

}



