/*Sorting Elements of an array in ascending order using insertion sort algorithm*/
#include<stdio.h>
int main()
{
	int A[10],n;
	int key,i,j;

	printf("Enter number of terms(should be less than 11): ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(j=1;j<=n;j++)
	{
		scanf("%d",&A[j]);
	}
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
	printf("In ascending order: ");
	for(j=1; j<=n; j++)
		printf("%d\t",A[j]);
    return 0;
}


