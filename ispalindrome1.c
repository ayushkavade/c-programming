#include<stdio.h>
#include<string.h>

int main(){
int n, i, j, count=0;
char string1[100];
char string2[100];
scanf("%d", &n);
int middle = strlen(string1)/2;
printf("enter string 1 here\n");


    /* code */scanf("%s", string1);







   


for ( j = 0; j <middle ; j++)
{
    if (string1[i]==string1[strlen(string1)-1-i])
    {
        /* code */count++;
    }
    
}
if (count==middle)
{
    /* code */printf("\nit is palindrome\n");
}

else
printf("it is not a palindrome");
return 0;
}