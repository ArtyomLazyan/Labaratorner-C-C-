#include <stdio.h>

int main(void) {

	float pmat, ptetr, sum; int nmat, ntetr; 
	
	printf("Greq matiti gin@: ");
	scanf("%f", &pmat);

	printf("Greq matitneri qanak@: ");
	scanf("%i", &nmat);

	printf("Greq tetri gin@: ");
	scanf("%f", &ptetr);

	printf("Greq tetreri qanak@: ");
	scanf("%i", &ntetr);

	sum = pmat * nmat + ptetr * ntetr;

	printf("\n @ndhanur arjeq@ kazmume: %.2f \n\n", sum);

	getchar();
	return 0;
}