#include <stdio.h>
void multiply(int arr1[10][10], int arr2[10][10], int r1, int c1, int r2, int c2) //multiplication function (by kamran)
{
	int ans, k, i, j;
	int sum[10][10];
	printf("\t\nThe answer for multiplication of above matrices is:\n");
	for(i=0; i<r1; ++i)
	{
		for (j=0; j<c2; ++j)
		{
			sum[i][j]=0;
		}
	}
	for(i=0;i<r1;++i)  //multiplying matrices
	{
		for(j=0;j<c2;++j)
		{
			for(k=0; k<c1; ++k)
			{
				sum[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c2; ++j)
		{
			printf("\t%d  ", sum[i][j]);
			if(j==c2-1)
			printf("\n");
		}
	}	
}//end of function


void add(int arr1[10][10], int arr2[10][10], int r1, int c1)//addition function (by kamran)
{
	int sum[10][10];
	int i, j;
	printf("\t\nThe answer for addition of above matrices is:\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			sum[i][j]=arr1[i][j] + arr2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}//end of function


float inverse(int arr1[10][10])
{int d,i,j,temp=0;
float resarr[10][10];
	d=determinant(arr1);
 	temp = arr1[0][0];               
    arr1[0][0] = arr1[1][1];
    arr1[1][1] = temp;
	 arr1[0][1] = arr1[0][1]*-1;  
    arr1[1][0] = arr1[1][0]*-1;

    for( i=0;i<2;i++){         
        for( j=0;j<2;j++)
        {
		
            resarr[i][j] = (1/(float)d)*(float)arr1[i][j];
        }
    }

    printf("\n\nThe inverse of the matrix is:\n");  
    for( i=0;i<2;i++){
        for( j=0;j<2;j++){
            printf("%f  ",resarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int singular(int arr1[10][10])
{int d;
			d=determinant(arr1);
			if(d==0)
			printf("\n\nThe matrix is singular.\n");
			else
			printf("\n\nThe marix isn't singular.\n");
			
}
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
int determinant(int arr[10][10]) // By Muhammad Taha Raees
{
	int res;
	res= (arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
	printf("\nDeterminant is: %d", res);
	return res;
}
int transpose(int r, int c, int arr[10][10]) // By Muhammad Taha Raees
{
	int i, j, resarr[r][c], *restranspose;
	restranspose= &resarr[r][c];
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			resarr[j][i]= arr[i][j];
		}
	}
	printf("\nTranspose of matrix is: \n");
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
    return *restranspose;
}
int unit(int r, int c)  // By Muhammad Taha Raees
{
	int i, j, resarr[r][r];
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			if (i==j)
			{
				resarr[i][j]=1;
			}
			else
			{
				resarr[i][j]=0;
			}
		}
	}
	printf("\nUnit matrix of the desired dimensions is: \n");
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
}
void main()      // By Muhammad Taha Raees
{
	// initialisation of variables
	int r1, c1, r2, c2, arr1[10][10], arr2[10][10], i, j, op, n;
	char ch;
	// Asking if user wants to produce a unit matrix
	printf("Do you want to produce a unit matrix? (y/n)");
	scanf("%c", &ch);
	if (ch=='y')
	{
		printf("\nEnter number of rows and colums for the matrices respectively:");
	    scanf("%d" "%d", &r1, &c1);
		op=8;
	}
	else
	{
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
	    printf("\n3: Inverse");
	    printf("\n4: Determinant(only for 2 by 2 matrix)");
	    printf("\n5: Transpose");
	    printf("\n6: Singular");
	    printf("\n7: Symmetry");
	    scanf("%d", &op);
	}
	
	// checking conditions, if condition meets, call function
	switch (op)
	{
		case 0: //checking if addition is possible
			if(r1==r2 && c1==c2)
			{
				add(arr1, arr2, r1, c1);//function call
			}
			else
			{
				printf("addition not possible");
			}	
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
			if(n==1)
			{
				multiply(arr1, arr2, r1, c1, r2, c2);//function call
			}	
			else
			{
				printf("multiplication not possible");
			}
			break;
		case 3:
			if ((r1==2) && (c1==2))
			inverse(arr1);
			else printf("error!Eet a 2X2 matrix");
			
			break;
		case 4:
			if (n==1)
			{
				if (r1==2 && c1==2)
				{
					determinant(arr1);
				}
				else
				{
					printf("Its not 2 by 2 matrices");
				}
			}
			else
			{
				printf("[ERROR]Please enter a single matrix for this operation");
			}
			break;
	
		case 5:
			if(n==1)
			{
				transpose(r1, c1, arr1);
			}
			else
			{
				printf("[ERROR] Enter single matric for this operation");
			}
			
			break;
		case 6:
			if ((r1==2) && (c1==2))
				singular(arr1);
			else printf("error!Eet a 2X2 matrix");
			break;
		case 7:
			
			break;
		case 8:
			if (r1==c1)
			{
				unit(r1, c1);
			}
			else
			{
				printf("[ERROR] Row and Column should be same");
			}
			break;
		default:
			printf("no such operation exists");
			break;
	}
}
