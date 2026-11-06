#include <stdio.h>
 
void merge(int a[], int n, int b[],  int m)
{   int c[n+m];

    int max;
    int k = 0, i = 0, j = 0;
   

    while (i<n && j<m)
    {
       if (a[i]<b[j])
       {
         c[k++] = a[i];
         i++;
       }else{
       c[k++] = b[j];
       j++;}
    }if (n>m)
    {
         max = n;
    }else
    max = m;
   while (i<n)
   {
    /* code */c[k++] = a[i++];
   }
   while (j<m)
   {
    /* code */c[k++] = b[j++];
   }
   
   for (int z = 0; z < n+m; z++)
   {
    /* code */printf("%d\t", c[z]);
   }
   
    
}
int main(){
    int a[5] = {4, 11, 23, 37, 58};
int b[3] = {7, 19, 42};
merge(a, 5, b, 3);
    return 0;
}