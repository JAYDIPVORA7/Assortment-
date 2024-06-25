#include <stdio.h>
/*
Develop a program that finds all the negative elements from a given 1D array.
Example:
Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5
Output:
Negative elements from an Array: -4, -3, -5
*/
main()
{
	int n;
	
	printf("enter array's size=> ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative elements from an Array=>");
	
	for(i=0;i<n;i++)
	{	
		if(0>a[i])
		{
			printf("%d,",a[i]);
		}
	}
}