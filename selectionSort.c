#include<stdio.h>
int sel(int a[], int n){
    printf("\n");
    int comparison = 0;
    for (int i = 0; i < n-1; i++)
    {
        /* code */int min = i;
        for (int j = i+1; j < n; j++)
        {
            comparison++;
            /* code */if (a[j]<a[min])
            {
                /* code */min = j;

            }
            
        }int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */printf("%d\t", a[i]);

    }
    
    return comparison;
    
}







int main(){
    int a[5] = {64, 25, 12, 22, 11};
    int b[10] = {64, 25, 12, 22, 11, 90, 3, 47, 8, 35};


    printf("n = 5 comparison = %d\n", sel(a, 5) );
    printf("n = 10 comparison = %d\n", sel(b, 10));
    return 0;

}