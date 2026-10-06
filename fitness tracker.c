#include <stdio.h>
float avg;
int sum=0;
int dayCategory(int steps)
{
    if (steps < 5000)
        return 0;
    if ( steps >= 5000 && steps<10000)
        return 1;
             if (steps > 10000)
    
               /* code */ return 2;
            }
    

        int main()
        {
        int n, steps, i, sum = 0, result, count = 0, countgol=0, bestday = -1, a=0;
        int max=0;
        float avg;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            /* code */ scanf("%d", &steps);
            sum = sum + steps;
            result = dayCategory(steps);
            if (result == 0)
            {
                /* code */ printf("day is sedentary");
            }
            if (result == 1)
            {
                /* code */ printf(" day is active\n");
            }
            if (result == 2)
            {
               printf("goal is achieved\n");
                count++;
                countgol++;
            }
            else
            {
                count = 0;
            }
            if (count>max)
            {
                /* code */max = count;
            }
            

            if (count >= 3)
            {
                /* code */ printf("fitness streak\n");
            }
            
            {
                /* code */
            }
            if (steps>bestday)
            {
                /* code */bestday = steps;
                a=i+1;
            }
            
        }
         avg = (float)sum/n;

        
        printf("average number of steps per day is %.2f\n", avg);
        printf("number of goal days is %d\n", countgol);
        printf("best day is %d\n", a );
        printf("%d is your best step\n", bestday);
        printf("longest consecutive number of goal days is %d\n", max);


    return 0;
}
