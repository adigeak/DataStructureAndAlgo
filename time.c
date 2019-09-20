//Program to demonstrate time taken by the funtion
#include <stdio.h>
#include <time.h>

void fun()
{
    for(int i = 0; i<=1000; i++);
}

int rec(int i)
{
    if(i>=1000)
        return 0;
    else
        rec(i++);
}

int main()
{
    // Calculate the time taken by function
    clock_t t;
    //calling a normal function.
    t = clock();
    fun();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("function fun() took %f sec to execute \n", time_taken);
    //Directly running the loop
    t = clock();
    for(int j = 0; i<=1000; j++);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("loop took %f sec to execute \n", time_taken);
    //calling a recursive function.
    t = clock();
    int a = rec(0);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("loop took %f sec to execute \n", time_taken);
}
