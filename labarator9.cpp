#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* xndir 9.1
int compareNum(const void *, const void *);
int compareStr(const void *, const void *);

const int N = 10;

int arr[N] = { 11, -7, 2, 3, 0, 45, -3, 0, 9, 12 };
char stringArr[5][N] = { "Armen", "Narek", "Karen", "Artur", "Vazgen" };

int main() {
    
    qsort(arr, N, sizeof(int), compareNum);
    
    printf("\n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    
    printf("\n\n");
    
    qsort(stringArr, 5, N, compareStr);
    
    for (int i = 0; i < 5; i++)
        printf("%s%s", stringArr[i], " ");
    
    printf("\n\n");
    return 0;
}


// erku funkcianern el veradarcnum en 0, bacsakan kam drakan tver
int compareNum(const void *val1, const void *val2){
    
    // convertacnuma int tipi cucichi u iraric hanuma
    return ( *(int*)val1 - *(int*)val2 );
}

int compareStr(const void *str1, const void *str2){
    // konvertacnuma void tipi cucichner@ char tipi cucichi
    const char* s1 = (const char*)str1;
    const char* s2 = (const char*)str2;
    
    return strcmp(s1, s2);
}
*/

/* Xndir 9.3
int func(unsigned);

int main()
{
    unsigned val = 0xFF, index = 0, k = 1;

    index = func(val);
    printf("Index = %d\n", index);
    
    // indexi chapov depi dzaxa texapoxum 1@ u ^ nshanov 0 a veracum
    k <<= index;
    val = val ^ k;
    
    printf("new Number: %x\n", val);
    
}

int func(unsigned num)
{
    unsigned index = 0, mas = 0x80000000;

    for (int i = 0; i < 32; i++)
    {
        if (num & mas)
        {
            index = i + 1;
            
            return 32 - index;
        }

        mas >>= 1;
    }
    
    return -1;
}

/* Xndir 9.2
void binar(unsigned);

int main()
{
    unsigned num;
    
    printf("Set number: ");
    scanf("%d", &num);
    
    binar(num);
    printf("\n");
    
    
    return 0;
}

void binar(unsigned number)
{
    unsigned mas = 0x80000000;
    
    printf("new Number: ");
    for (int i = 0; i < 32; i++)
    {
        (number & mas) ? putchar('1') : putchar('0');
        mas >>= 1;
        
        if ((i == 7) || (i == 15) || (i == 23))
            putchar(' ');
    }
}
*/
