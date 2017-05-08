#include <iostream>
#include <stdio.h>
#include "Header.h"

int main()
{
	char str[50];
	FILE *file1, *file2;

	OpenFiles("f1.txt", "r", "f2.txt", "w");

	if ((file1 == NULL) || (file2 == NULL))
	{
		printf("Error could not open file");
		exit(1);
	}

	//hashvuma bareri qanak@ 
	while (fgets(str, 50, file1) != NULL)
	{
		int i = 0;
		int n = 0;

		// verji naxadasutyan verjum kara chlini \n u linuma \0 dra hamar etel hashvi petqa arnvi 
		while ((str[i] != '\n') && (str[i] != '\0'))
		{
			if ((str[i] != ' ' && str[i + 1] == ' ') || (str[i + 1] == '\n' || str[i + 1] == '\0'))
				n++;
			i++;
		}		

		if (n == 4)
			fputs(str, file2);		
			
	}

	
	fclose(file1);
	fclose(file2);
	std::cout << "Succsess..." << std::endl;
	getchar();
	return 0;
}