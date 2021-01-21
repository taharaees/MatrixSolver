#include <stdio.h>
void main()
{
	FILE *fp;
	int sol1[2][2], sol2[2][2], sol3[2][2];
	char name[50];
	char roll[20];
	fp= fopen("quiz.txt", "r+");
	fscanf(fp, "%s", name);
	fgets(name, 20, fp);
	fclose(fp);
	printf("%s", name);
}
