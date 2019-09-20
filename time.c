//Program to demonstrate time taken by the funtion
#include <stdio.h>
#include <time.h>

void fun()
{
    for(int i = 0; i<=1000; i++)
}

int main()
{
    // Calculate the time taken by fun()
    clock_t t;
    t = clock();
    fun();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("function fun() took %f sec to execute \n", time_taken);
}
