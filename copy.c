#include <stdio.h> 
#include <stdlib.h> // For exit()

int main()
{
	FILE *fptr1, *fptr2; // using 2 pointer 
	char filename[100], c;

	printf("Enter the filename to open for reading: ");
	scanf("%s", filename);

	// Open one file for reading
	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s: ", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing: ");
	scanf("%s", filename);

	// Open another file for writing
	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s: ", filename);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", filename);

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
