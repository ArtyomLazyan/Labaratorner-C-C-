#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define TEST(p) {if(p == false){ printf("Error! False condition: <"#p">\n");\
printf("In file <%s>\n", __FILE__); \
printf("On line <%d>\n",__LINE__); abort(); }}

int main()
{
#ifdef _DEBUG
	printf("First Test\n");
	TEST(7 == 7);
	printf("Second Test\n");
	TEST(7 > 9)
#endif	



	return 0;
}