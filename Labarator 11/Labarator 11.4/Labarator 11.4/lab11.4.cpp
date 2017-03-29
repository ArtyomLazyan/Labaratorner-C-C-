#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char s1[256];
  int i, len;
    
  FILE *fptr1, *fptr2;

  if ( (fptr1 = fopen("f1.txt","r")) == NULL )
  {
    printf("Cannot open a file \n");
    exit(1);
  }

  if ((fptr2 = fopen("f2.txt","w")) == NULL)
  {
	printf("Cannot open a file \n");
	exit(1);
  }
  
  
  while(fgets(s1, 256, fptr1) != NULL)
  {
    len = strlen(s1);
	// araji toxi verjic galisa sax probelneri vrov ancnuma henc tariya rastvum
	// dra hajordin avelacnuma \n mekel \0  ktruma eli aj mas@
	for(i = len - 2; s1[i] == ' '; i--);
	  
	s1[i + 1] = '\n'; 
	s1[i + 2] = '\0';
	   
	// stexel toxi demica stugelov galis probelneri vrov trnelov minchev rastvuma tari 
	for(i = 0; s1[i] == ' '; i++);
	
	fputs(s1 + i, fptr2);
	   
  }
  
  
   printf("Finish \n");	  
   fclose(fptr1);
   fclose(fptr2);

   return 0;
}