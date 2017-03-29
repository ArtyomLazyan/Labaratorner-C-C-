#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int len, i, count = 0, num;
	char name[30], str1[30], str2[30];


	FILE *fp;

	// stexcuma fayl 
	if ((fp = fopen("f1.txt", "w")) == NULL)
	{
		printf("Error could not open file");
		exit(1);
	}

	printf("Enter names: \n");

	// nermucum enq fayli mej 5 anun 
	for (int i = 0; i < 5; i++)
	{
		printf("[%d]name : ", i + 1);
		scanf("%s", name);

		// stex fayli mej mianqamic tpuma anvan hamar@ mekel tareri qanak@ 
		len = strlen(name);
		fprintf(fp, "Name%d %s Letter %d\n", i + 1, name, len);
	}

	fclose(fp);
	printf("The file was succsessfully created! \n\n");

	// bacum enq nuyn fayl@ kardalu npatakov 
	if ((fp = fopen("f1.txt", "r")) == NULL)
	{
		printf("Error could not open file");
		exit(1);
	}

	// stexel hertov toxer@ karduma amen mi ktor@ qcuma arandzin zangvacneri mej ayd tvum nayev erkarutyun@ 
	while (fscanf(fp, "%s%s%s%d", str1, name, str2, &num) != -1)
		if (num == 4) count++; // vor anvan erkarutyun@ 4a uremn count++

	printf("Number of names : %d\n", count);

	fclose(fp);
	return 0;
}