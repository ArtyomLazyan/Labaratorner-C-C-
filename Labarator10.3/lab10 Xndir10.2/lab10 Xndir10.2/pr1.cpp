#include <stdio.h>
#include <stdlib.h>
#include "pr.h"

int main()
{
	Journal journal[4]; // karucvacqayin zangvac 4 tarreric kazmvac
	float totalPrice = 0.0;

	printf("**** JOURNAL *****\n\n");

	// nermucum enq amen mi tarri arjeq@
	for (int i = 0; i < 4; i++)
	{
		printf("Set %d Name: ", i + 1);
		if (!scanf("%s", journal[i].name)) return -1;
		printf("Set %d Val: ", i + 1);
		if (!scanf("%u", &journal[i].val)) return -1;
		printf("Set %d Price: ", i + 1);
		if (!scanf("%f", &journal[i].price)) return -1;
		printf("\n");
	}

	// func funkcian veradarcnuma mijin tvabanakan@ en amsagri gneri voronc tvaqanak@ 10000 ic meca
	totalPrice = func(journal);
	printf("Total Price : %f\n", totalPrice);

	system("pause");
	return 0;
}