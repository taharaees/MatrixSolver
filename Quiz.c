 #include <stdio.h>
#include <stdlib.h>
int add(int arr1[10][10], int arr2[10][10], int r1, int c1)//addition function (by kamran)
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
	int *resarray=&sum[i][j];
	return *resarray;
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
    int *resarray=&resarr[i][j];
    return *resarray;
}
struct student
{
	char roll[20];
	char name[50];
	int ans[2][2];
	int ans2[2][2];

};
void main()
{
	int i,j,*p, newarr[2][2],newarr1[2][2];
	struct student s;
	FILE *fp;
	int mat1[2][2]={2,4,3,6};
	int mat2[2][2]={6,2,0,6};
	//prompting input
	printf("Quiz");
	printf("\n\n Please enter your name:");
	gets(s.name);
	printf("\n Please enter your roll no.:");
	gets(s.roll);
	printf("\n\nQ1.");
	printf("\n");
	// Showing question1
	for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
            printf("%d  ",mat1[i][j]);
        }

        printf("\n");
    }
    
    printf("  +  \n");
     
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
            printf("%d  ", mat2[i][j]);
        }

        printf("\n");
    }
    // prompting answer
    printf("\n\nEnter your answer:\n\n");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
        	printf("Enter for row%d col%d ", i, j);
            scanf("%d",&s.ans[i][j]);
        }

        printf("\n");
    }
    int count=0;
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		if(newarr[i][j]==s.ans[i][j]);
    		count++;
		}
	}
    
    printf("\n\nQ2.");
	printf("\n");
	// SHowing question2
	for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
            printf("%d  ",mat1[i][j]);
        }

        printf("\n");
    }
    
    printf("  -  \n");
     
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
            printf("%d  ", mat2[i][j]);
        }

        printf("\n");
    }
    // prompting answer
    printf("\n\nEnter your answer:\n\n");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
        	printf("Enter for row%d col%d ", i, j);
            scanf("%d",&s.ans2[i][j]);
        }

        printf("\n");
    }
    int r2=2,c2=2;
    int count2=0;
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		if(newarr1[i][j]==s.ans2[i][j])
    		count2++;
		}
	}
    
    
	
	fp= fopen("quiz.txt", "w");
	if(fp == NULL) 
   {
      printf("Error!");   
      exit(1);             
   }
   fprintf(fp, "%s", s.name);
   fprintf(fp,"\n");
   fprintf(fp, "%d", s.roll);
   fprintf(fp, "\nyour marks for this question are: %d\n",count);
   fprintf(fp, "\nyour marks for this question are: %d\n",count2); 
	fclose(fp);
}
