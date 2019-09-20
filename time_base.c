#include <stdio.h>
#include <time.h>

int main()
{
	clock_t t;
	t = clock();
	//put your code here
	t = clock() - t;
	double time = ((double)t)/CLOCKS_PER_SEC;
	printf("code take %f sec to execute\n", time);
}
