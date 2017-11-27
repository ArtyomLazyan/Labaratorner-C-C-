#include <stdio.h>
#include <string.h>

/* Xndir 6.2
void Sort(int *, int );

int main(void) {
    
    const int N = 10;
    int arr[N] = { 5, 3, 9, 12, 32, 7, 3, 54, 2, 11 };
    
    printf("Amboxj tver: ");
    for (int i = 0; i < N; i++)
        printf("%d%c", arr[i], ' ');
    
    Sort(arr, N);
    
    printf("\n\n Dzvac tver: ");
    for (int i = 0; i < N; i++)
        printf("%d%c", arr[i], ' ');
    
    printf("\n\n\n");
    return 0;
}

void Sort(int *a, int size) {
    int i;
    bool flag;
    
    do {
        flag = false;
        for (i = 0; i < size - 1; i++)
            if (a[i + 1] < a[i]) {
                
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                
                flag = true;
            }
    } while (flag);
}
*/

/* Xndir 6.1
#define M 5
#define N 30

int cmp1(char *, char *);
void copy1(char *, const char *);

int main(void) {
        
    char arr[M][N], buff[N];
    printf("Nermuceq 5 hat tox\n");
    for (int i = 0; i < M; i++) {
        printf("%d : ", i + 1);
        gets(arr[i]);
    }
 
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M - 1; j++)
            if (cmp1(arr[j], arr[j + 1]) > 0) {
 
                copy1(buff, arr[j]);
                copy1(arr[j], arr[j + 1]);
                copy1(arr[j + 1], buff);
                
            };
        
    printf("\nTesakavorvac:\n");
    for (int i = 0; i < M; i++) {
        printf("%d : ", i + 1);
        puts(arr[i]);
    }
    
    return 0;
}

// funkciya strcmp
int cmp1(char * str1, char * str2) {
    
    while ( *str1 != '\0' && *str2 != '\0' && *str1 == *str2 ) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void copy1(char * str1, const char * str2) {
    while ((*str1++ = *str2++));
}
*/

/* Xndir 6.3
int strint(const char * );

int main(void) {
    
    char str1[] = "4578";
    char str2[] = "45a7";
    char str3[] = "abc";

    printf("Tox 1: %d\n", strint(str1));
    printf("Tox 2: %d\n", strint(str2));
    printf("Tox 3: %d\n", strint(str3));

    return 0;
}

int strint(const char * str) {
    
    int number = 0;
    for (int i = 0; str[i] > '0' && str[i] <= '9'; i++) {
        number = number * 10 + (str[i] - '0');
    }
    return number;
}
*/

/* 6.4
int main(void) {
    
    int a = 1;
    int *ptr = &a;
    char *ptr1 = (char *)ptr;
    
    if (*ptr1 == 1)
        printf("Little Endian (Intel)\n");
    else
        printf("Big Endian (Motorolla)\n");
    
    return 0;
}
*/


/* lracucich
#define M 5

int main() {
    int minTox, maxSyun, tox = 0, syun = 0;
    
    int matric[M][M] = {
        
        { 1, 5, 4, 3, 2 },
        { 9, 8, 6, 9, 8 },  // stexcum enq matric@
        { 8, 9, 7, 8, 9 },
        { 4, 8, 5, 5, 3 },
        { 9, 8, 3, 9, 8 }
        
    };
    
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%3.0d", matric[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < M; i++) {
        
        minTox = matric[i][0];
        tox = 0;
        for (int j = 0; j < M - 1; j++)
            if (matric[i][j + 1] < minTox) {
                minTox = matric[i][j + 1];
                tox = j + 1;
 
        maxSyun = matric[0][tox];
        syun = 0;
        for (int i = 0; i < M - 1; i++)
            if (matric[i + 1][tox] > maxSyun) {
                maxSyun = matric[i + 1][tox];
                syun = i + 1;
            }
        
        if (maxSyun == minTox)
            printf("mer uzac cnaaa: [%d][%d] = %d\n", syun + 1, tox + 1, maxSyun);
        
    }
    
    return 0;
}
*/

