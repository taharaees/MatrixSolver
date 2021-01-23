 #include <stdio.h>
#include <stdlib.h>
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
struct student
{
	char roll[20];
	char name[50];
};
struct mat{
	int mat1[2][2];
	int mat2[2][2];
	int ans;
};
void main()
{
	int i,j;
	struct student s;
	FILE *fp;
	struct mat q1, q2;
	q1.mat1={{2,4}
	         {3,6}} ;
	q1.mat2={{6,2}
	         {0,6}};
	//prompting input
	printf("Quiz");
	printf("\n\n Please enter your name:");
	gets(s.name);
	printf("\n Please enter your roll no.:");
	gets(s.roll);
	printf("\n\nQ1.");
	printf("\n");
	// SHowing question1
	for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
            printf("%d  ", q1.mat1[i][j]);
        }

        printf("\n");
    }
    
    printf("  +  ");
     
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
            printf("%d  ", q1.mat2[i][j]);
        }

        printf("\n");
    }
    // prompting answer
    printf("\n\nEnter your answer:");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
        	printf("Enter for row%d col%d", i, j);
            scanf("%d",q1.ans[i][j]);
        }

        printf("\n");
    }
	
	fp= fopen("quiz.txt", "w");
	if(fp == NULL) 
   {
      printf("Error!");   
      exit(1);             
   }
   fprintf(fp, "%s", s.name);
   fprintf(fp, "%s", s.roll); 
	fclose(fp);
}
