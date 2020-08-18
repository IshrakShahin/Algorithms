/*Sorting Elements of an array in ascending order using insertion sort algorithm*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
	int A[1000],n;
	int key,i,j;
    time_t t;

	printf("How many random numbers?(should be less than 1000): ");
	scanf("%d",&n);

     /* Intializes random number generator */
    srand((unsigned) time(&t));
	/* Print n random numbers from 0 to 49 */
    for( j=1; j <= n ; j++ )
       A[j] = rand() % 50;
   printf("The random numbers are: ");
   for( j=1; j <= n ; j++ )
       printf("%d\t", A[j]);

	// Insertion Sort Algorithm starts
	for(j=2;j<=n;j++) // Step 1
	{
		key = A[j];   // Step 2
		i=j-1;        // Step 4
		while(i>0 && A[i]> key) // Step 5
		{
			A[i+1] = A[i]; // Step 6
			i=i-1; // Step 7
		} // end while
		A[i+1]=key; // Step 8
	} // end for

	// Algorithm ends

	// For displaying the output
	printf("\n In ascending order:\n");
	for(j=1; j<=n; j++)
		printf("%d\t",A[j]);
    return 0;
}


