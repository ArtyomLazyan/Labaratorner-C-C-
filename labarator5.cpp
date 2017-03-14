#include <stdio.h>
#include <string.h>

/* 5.1
int main(void) {

	char str[100];
	printf("Greq tox : "); // nermucum enq tox 
	gets(str);
	int n = strlen(str);

	if (n % 2 != 0) // ete kenta tox@ uremn n - 1 enq anum vor zuyg lini 
		n--;

	for (int i = 0; i < n; i += 2) { // zuyg simvolner@ poxum enq texerov 
		int temp = str[i];
		str[i] = str[i + 1];
		str[i + 1] = temp;
	}

	printf("Tars tox : %s", str);

	getchar();
	return 0;
}
*/

/* xndir 5.2 karch tarberak
int main() {

		char s1[] = "ASSIBBBBBBBBBBKAPPLLBBBBBBBBBBKALKBBBBBBBBBBKAAFFSKK";
		char s2[] = "BBBBBBBBBB";
		int lengthS1 = strlen(s1);
		int lengthS2 = strlen(s2);

		int count = 0;
		char *begin = s1;
		while (begin < s1 + lengthS1) { // begin parunakum e s1 toxi araji sinvoli hascen 
			if (strncmp(begin, s2, lengthS2) == 0) { // ete qtnuma s1 um s2 toxi nman uremn count mekov mecanume  
				count++;
				begin += lengthS2;
			} 
			else begin++; // ete skzbic s2 chapov nman tox chi qtnum hascen texapoxvum e hajord sinvolin
		}

		printf("Entatoxeri qanak@: %d\n", count);
		getchar();
		return 0;
}
*/
/* 5.2 erkar tarberak
int main(void) {

	char s1[] = "ASSIBBBBBBBBBBKAPPLLBBBBBBBBBBKALKBBBBBBBBBBKAAFFSKK";
	char s2[] = "BBBBBBBBBB";
	int lengthS1 = strlen(s1);
	int lengthS2 = strlen(s2);
	int l = 0, k = 0;

	while (l < lengthS1) {
		if (strncmp(s1, s2, lengthS2) == 0) { // ete s1 toxum 0 ic sksac s2 in havasar tox qtav uremn == 0
			for (int i = 0; i < lengthS1 - lengthS2; i++) // s1[] tox@ karchacnum enq s2 toxi erkarutyan chapov 
				s1[i] = s1[i + lengthS2]; 
				l += lengthS2; // l erkaacnum enq s2[] i chapsov while cikli hamar 
				k++;
		}
		else {
			for (int j = 0; j < lengthS1 - 1; j++)
				s1[j] = s1[j + 1]; // s1[] karchacnum enq 1 ov 
				l++; // l erkaacnum enq 1 ov while cikli hamar 
		}
	}
	printf("Entatoxeri qanak@ = %d\n", k);

	getchar();
	return 0;
}
*/
/* 5.3
#define M 5
#define N 40

int main(void) {
	
	char arr[M][N], buff[N];
	printf("Nermuceq 5 hat tox\n");
	for (int i = 0; i < M; i++) // nermucum enq tox@@@@@
		gets(arr[i]);

	for (int i = 0; i < M; i++) 
		for (int j = 0; j < M - 1; j++) // pxpjakavor tesakavorum
			if (strcmp(arr[j], arr[j + 1]) > 0) { // ete toxi arajin simvol@ mec e erkrord simvolic
				strcpy(buff, arr[j]); // texerov poxuma toxer@ anunnerov 
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], buff);
			};

	printf("\nTesakavorvac:\n");
	for (int i = 0; i < M; i++) // artacuma tox@ axpers
		puts(arr[i]);

	getchar();
	return 0;
}
*/
/* xndir 5.4
int main(void) {

	double gumar = 0.0; int kod, qanak;

	printf("Nervmuceq apranqi kod@ : ");
	scanf("%d", &kod);

	printf("Nervmuceq apranqi qanak@ : ");
	scanf("%d", &qanak);
	
	  switch ( kod ) {
		 case 5:
			gumar += (double)qanak * 22.45; 
			break;
		 case 10:
			gumar += (double)qanak * 15.17;  
			break;
		 case 15: 
		 case 18:
			gumar += (double)qanak * 45.36;  
			break;
		 case 20:
		 case 25:
			gumar += (double)qanak * 61.25;  
			break;

		 default: {
		 	printf("@tenc kod chka aziz!");
		 	return -1;
		 }		
   } 
   
   	printf("@ndhanur gumar@ kazmum e : %.2f\n", gumar);

	getchar();
	return 0;
} 
*/
