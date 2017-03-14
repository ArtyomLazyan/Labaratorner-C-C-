#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* xndir 3.1
int main(void) {

	double pi = 0.0; int n;

	printf("Mutqagreq 1000 kam 1000000 : n = ");
	scanf("%d", &n);

	if (n == 1000 || n == 1000000) {
		
		for (int i = 1; i <= n; i++)
			(i - 1) % 2 == 0 ? (pi += 4.0 / (2 * i - 1)) : (pi -= 4.0 / (2 * i - 1));


		printf("PI = %f\n", pi);

	} else printf("Error sxal tiv eq mutqaagrel\n");
	

	getchar();
	return 0;
}
*/
/* 3.2
int main(void) {

	int n, fact; float s = 0.0, x;

	printf("x = "); scanf("%f", &x);
	do {
		printf("(n <= 5) n = "); scanf("%d", &n);
	} while(n > 5);

	n = 2*n+1;

	for (int i = 1; i <= n; i += 2) {
		fact = 1;
		
		for (int j = 1; j <= i; fact *= j, j++); // faktorial

		s += pow(x, i) / fact; // funkciayi hashvark
	}

	printf("S = %.2f", s);

	getchar();
	return 0;
}
*/

/* lab 3.3
int main(void) {

	float y, x = -5.5;

	printf("\n__Func___    ||    ___Arg__\n");

	while(x <= 4.5) {

		if (x > 1) {
			
			y = pow(2, 5 - x);

		} else if (x <= 1) {

			y = 7 - x;

		}

		printf("y = %5.1f    ||    x = %.1f\n", y, x);
		x += 2;
	}

	getchar();
	return 0;
}
*/

/* xndir 3.4 
int main(void) {

	int n, k = 0; bool flag;    

	printf("N = ");
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {

		flag = false;

		if (i == 2 || i == 3) {
			
			printf("%5.0d", i);
			k++;

		} else if (i % 2 != 0) {

			for (int j = 2; j <= sqrt(i); j++) { // gtnum e tvi parz linel@ 
				
				if (i % j == 0) {

					flag = false;
					break;

				} else flag = true;
			}
		} 

		if (flag) {
			printf("%5.0d", i);
			k++;
		}

		if (k == 10) {
			k = 0;
			printf("%c", '\n');
		}

	}

	getchar();
	return 0;
}
*/
