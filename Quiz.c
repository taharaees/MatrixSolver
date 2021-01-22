#include <stdio.h>
#include <stdlib.h>
struct student
{
	char roll[20];
	char name[50];
};
void main()
{
	struct student s;
	FILE *fp;
	int sol1[2][2], sol2[2][2], sol3[2][2];
	fp= fopen("quiz.txt", "r");
	if(fp == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

	fseek(fp, 6, SEEK_SET);
	fgets(s.name, 50, fp);
	fgets(s.roll, 20, fp);
	fclose(fp);
	puts(s.name);
	puts(s.roll);
	
}
