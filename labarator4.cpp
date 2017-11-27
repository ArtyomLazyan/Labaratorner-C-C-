#include <stdio.h>
#include <limits.h>
#include <math.h>

/* Xndir 4.1
int main(void) {

	unsigned int arr1[10], arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int p, j = 0;

	printf("p = ");
	scanf("%d", &p);

	for (int i = 0; i < 10; i++)
		if (arr[i] % p == 0) {
			arr1[j] = arr[i]; 
			j++;
		}

	if (j == 0) {
		printf("Dzer grac tiv@ chka");
	} else {
		for (int i = 0; i < j; i++)
			printf("%3.0d", arr1[i]);
	}
	
	getchar();
	return 0;
}
*/
/* Xndir 4.2
int main(void) {

	int a1[] = {1, 2, 2, 5, 9, 8, 4, 4, 6, 3}, a2[10];
	int k, n = 0;

	for (int i = 0; i < 10; i++) {
		k = 0;
		for (int j = 0; j < 10; j++)
			if (a1[i] == a1[j]) 
				k++;
		if (k == 1) {
			a2[n] = a1[i];
			printf("%3.0d", a2[n]);
			n++;
		} 
	}
	
	getchar();
	return 0;
}
*/
/* 4.3
int main(void) {

	int n, base, tiv, mnacord;
	int i = 0;
	char digit[16] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70 };
	char arr[16];

	printf("Mutqagreq n = ");
	scanf("%d", &n);
	printf("Mutqagreq base <= 16 tiv : ");
	scanf("%d", &base);

	if (base <= 16 && base > 0) {
		do {
			tiv = n / base;
			mnacord = n % base;
			arr[i] = digit[mnacord];
			i++;
			n = tiv;
		} while (n >= base);

		arr[i] = digit[n];

		for (int j = i; j >= 0; j--)
			printf("%c", arr[j]);
			printf("\n");
	}
	else printf("Error base !!!\n");

	getchar();
	return 0;
}
*/

/* xndir 4.4 
int main(void)
{
	short c = SHRT_MAX;
	short d = c+5;
	float m = 1e20*1e20;
	int b = 0; 
	float a = 1.0/b;
    printf("%f\n",a); 
	float f = 1.0/a;
	
    float g = log(-5);
	printf("%f\n",g); 
	
	int h = 1/b;
	return 0;
}
*/
