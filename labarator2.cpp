#include <stdio.h>
#include <math.h>

int main(void) {

	double a, x, y; 

	printf("Mutqagreq a = ");
	scanf("%lf", &a);
	printf("Mutqagreq x = ");
	scanf("%lf", &x);

	if (x >= -5 && x <= 5) {
		y = pow((1 + a * a), 4);

	} else if (x > 5) {
		y = cos(log(x) * log(x)) + x * x;

	} else if (x < -5) {
		y = a;
	}

	printf("y = %lf", y);

	return 0;
} 


/* 2.3
int main(void) {

	int amis; 

	printf("Greq amsva tiv@: ");
	scanf("%d", &amis);

	if (amis == 3 || amis == 4 || amis == 5) {
		printf("Garun\n");
	} else if (amis == 6 || amis == 7 || amis == 8) {
		printf("Amar\n");
	} else if (amis == 9 || amis == 10 || amis == 11) {
		printf("Ashun");
	} else if (amis == 12 || amis == 1 || amis == 2) {
		printf("Dzmer\n");
	}

	getchar();
	return 0;
}
*/

/*  2.2 

int main(void) {

	int a, b, d, e; int num;

	printf("Mutqagreq hnganish tiv: ");
	scanf("%d", &num);

    a = num % 100000 / 10000; // arajin tiv
    b = num % 10000 / 1000; // erkrord tiv
    d = num % 100 / 10; // naxaverjin tiv
    e = num % 10; // verjin tiv

    if (a == e && b == d) {
    	printf("Yes\n");
    } else {
    	printf("No\n");
    }
	
	getchar();
	return 0;
}

*/

/* 2.1

int main(void) {

	float x1, x2, d; int a, b, c;

	printf("Mutqagreq a = ");
	scanf("%d", &a);

	printf("Mutqagreq b = ");
	scanf("%d", &b);

	printf("Mutqagreq c = ");
	scanf("%d", &c);

	d = b * b - 4 * a * c;

	if (a != 0 && d > 0) {

		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;

		printf("X1 = %f X2 = %f\n", x1, x2);

	} else {
		printf("Error: sxal baneq mutqagrel");
	}

	getchar();
	return 0;
}

*/

