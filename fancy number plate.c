#include<stdio.h>
int reversed = 0, a, original, rev;
int reversedN(int n){
while (n>0)
{
    a = n%10;
    reversed = reversed*10 + a;
    n = n/10;
}
return reversed;


}


int isPalindrome(int n)

{
 rev = reversedN(n);
    if (n==rev)
    {
        /* code */return 1;
    }else
    return 0;
    
}












int main(){
    int original;
    scanf("%d", &original);
    if (original >9999 || original <1000)
    {
        /* code */printf("number is invalid");
    }else {
    
   int result = isPalindrome(original);
   if (result ==1)
   {
    /* code */printf("extral fee : Rs 5000\n");

   }else
   printf("extra fee : Rs 0\n");}
   return 0;

   
}