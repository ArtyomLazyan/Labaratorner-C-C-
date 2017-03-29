#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* func(int);

int main()
{
    char *str = NULL;
    
    // cikl@ 3 angam fruma amen angam kanchelov func() u iran poxancuma i arjeq@
    for (int i = 1; i <= 3; i++)
    {
        str = func(i);
        printf("Link : %p Text : %s\n", str, str);
        
        // str cucich@ azatuma hisoxutyun@ iran hatkacvac
        free(str);
    }
    

    return 0;
}

// funkcian @ndunuma arjeq@ n mej pahum
char* func(int n)
{
    // toxeri cucicneri zangvac str1
    const char *str1[] = { "Text1", "Text2", "Text3" };
    // dinamik hishoxutyunic hatkacvac 265 bite tex vor@ veragrvuma str2 toxin
    char *str2 = (char*)malloc(256);
    
    // stexel de str2 toxi mej grancuma str1[n-1]-rd tox@ amen angam u veradarcnum hascen str2-i
    strcpy(str2, str1[n-1]);
    
    return str2;
    
}
