#include <stdio.h>
/*
Develop a Program to find the largest element from a given 2D array.
Example:
Input:
Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6
Output:
The largest element is: 9
*/
main() 
{
    int s,k;
    printf("Enter the array's row size=> ");
    scanf("%d", &s);
    printf("Enter the array's column size=> ");
    scanf("%d", &k);
    
    int a[s][k],i,j,max = a[0][0];;
    
    printf("Enter array's elements=>\n");
    for(i=0; i<s; i++) 
	{
        for(j=0; j<k; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<s; i++) 
	{
        for(j=0; j<k; j++) 
		{
            if(a[i][j]>max) 
			{
                max = a[i][j];
            }
        }
    }
    
    printf("The largest element is=> %d\n", max);

}
