#include <stdio.h>
int subtraction (int r, int c, int arr1[10][10], int arr2[10][10])  // by Muhammad Taha Raees
{
	int resarr[r][c];
	int i,j;
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			resarr[i][j]= arr1[i][j]-arr2[i][j];
		}
	}
	printf("\nSubtraction of two matrices: \n");
	for(i=0; i<r; ++i)
    {
        for (j=0; j<c; ++j)
		{
            printf("%d   ", resarr[i][j]);
            if (j==c-1)
			{
                printf("\n");
            }
        }
    }
    return 0;
}
void main() // By Muhammad Taha Raees
{
	// initialisation of variables
	int r1, c1, r2, c2, arr1[10][10], arr2[10][10], i, j, op, n;
	printf("Enter number of matrices u want to enter 1 or 2:");
	scanf("%d", &n);
	// Checking how many matrices and prompting input according to that
	if (n==1)
	{    // if a single matrice is inputted
		printf("\nEnter number of rows and colums for the matrices respectively:");
	    scanf("%d" "%d", &r1, &c1);
	    // Taking input from user, elements of the matrices
	    for (i=0; i<r1; ++i)
	    {
		    for(j=0; j<c1; ++j)
		    {
			    printf("\nEnter elements of the matrices %drow, %dcol:", i, j);
			    scanf("%d", &arr1[i][j]);
		    }
	    }
	}
	else
	{    //if 2 matrices are inputted
		// Taking input from user, rows and columns of first matrices
	    printf("\nEnter number of rows and colums for first matrices respectively:");
	    scanf("%d" "%d", &r1, &c1);
	    // Taking input from user, elements of first matrices
	    for (i=0; i<r1; ++i)
	    {
		    for(j=0; j<c1; ++j)
		    {
			    printf("\nEnter elements of first matrices %drow, %dcol:", i, j);
			    scanf("%d", &arr1[i][j]);
		    }
	    }
	    // Taking input from user, rows and columns of second matrices
	    printf("\nEnter number of rows and colums for second matrices respectively:"); 
	    scanf("%d" "%d", &r2, &c2);
	    // Taking input from user, elements of second matrices
	    for (i=0; i<r2; ++i)
	    {
	 	    for(j=0; j<c2; ++j)
		    {
			    printf("\nEnter elements of second matrices %drow, %dcol:", i, j);
			    scanf("%d", &arr2[i][j]);
		    }
	    }
	}
	
	// Taking input from user, operation he wants to do with matrices
	printf("\nChoose the number for the corresponding operation between two matrices");
	printf("\n0: Add");
	printf("\n1: Subtract");
	printf("\n2: Multiply");
	printf("\n3: Divide");
	printf("\n4: Conjugate");
	printf("\n5: Inverse");
	printf("\n6: Determinant");
	printf("\n7: Unit matrix");
	printf("\n8: Transpose");
	printf("\n9: Singular");
	printf("\n10: Hemition");
	printf("\n11: Skew Hemition\n");
	scanf("%d", &op);
	// checking conditions, if condition meets, call function
	switch (op)
	{
		case 0:
			//Kamran yeh tera hai add wala so i left it empty
			
			break;
		case 1://checking if subtraction is possible
			if(r1==r2 && c1==c2)
			{
				subtraction(r2, c2, arr1, arr2);
			}
			else
			{
				printf("Subtraction not possible");
			}
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		case 8:
			
			break;
		case 9:
			
			break;
		case 10:
			
			break;
		case 11:
			
			break;
		default:
			printf("no such operation exists");
			break;
	}
}
