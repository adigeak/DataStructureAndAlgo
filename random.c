// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
 
// Driver program
int main(void)
{
    // This program will create same sequence of
    // random numbers on every program run
    FILE* fptr;//pointer to the file
 
    // creating a file "random.txt" in "write" mode
    fptr = fopen("random.txt", "w");
    int i,n;
    if (fptr == NULL) {
        printf("ERROR");
        exit(1);
    }
    printf("enter number of element in random file\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
 
        // to generate number less than n
        int val = rand() % n;
 
        // storing data to file
        fprintf(fptr, "%d ", val);//fprintf is used for sending the stream of data to file
    }
 
    // closing the file
    fclose(fptr);
    printf("numbers generated successfully !! ");
    return 0;
}
//end
