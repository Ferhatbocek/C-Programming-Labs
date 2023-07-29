#include <stdio.h>
#include <time.h>
#include <stdlib.h>
double pattern_Butterfly(int n);
int even(int n);
int main()
{
    int number;
    double time_spent;
    printf("Write 1 for user defined size \nWrite 2 for random defined size\n");
    switch (getchar())
    {
    case '1':
      printf("\nWrite Size, it should be 5<n<51 and even: ");
      scanf("%d",&number);
      if((number>5 && number<51) && even(number) == 1) {            
        time_spent = pattern_Butterfly(number);
        printf("\nExecution time of the function %f mili seconds", time_spent);
      }
      else if((number>5 && number<51) && even(number) == 0) 
         printf("\nThe size should be even number!");
      else if((number<=5 || number>=51) && even(number) == 0)
          printf("\nThe size should be even number and size should be 5<n<51!");
      else 
          printf("\nthe size should be 5<n<51");
      break;

    case '2':
        time_spent = pattern_Butterfly(1);
        printf("\nExecution time of the function %f mili seconds", time_spent);
        // when i give the function 1 function randomly take n 
        break;
    default:
      printf("\nErroneous number!");
      break;
    }
    return 0;
}
double pattern_Butterfly(int n)
{
    // to store execution time of code
    double time_spent = 0.0;
    clock_t begin = clock();
    if(n == 1) { //randomized the n
        srand(time(NULL));   
        n = ((rand() % 23) +3)*2; 
        printf("\nRandom size = %d\n\n",n);
    }
    int i, j;
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  //upper left
                printf("1");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j) //upper right
                printf("2");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1) //bottom left
                printf("3");
            else
                printf(" ");
            if((i + n) <= j) //bottom right 
                printf("4");
            else
                printf(" ");
        }
        printf("\n");
    }
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    time_spent *= 1000; // seconds to mili seconds;
    return time_spent;
}
int even(int n) 
{
    if ((n % 2) == 0)
        return 1;
    else
        return 0;
    
}
