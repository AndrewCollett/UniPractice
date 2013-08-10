#include <stdio.h>
#include <stdlib.h>

int main (int argc , char* argv[])
{
	
	char s[] = {"this is so cool"};
	int cnt = 0;
	
	
	printf("Hello Wolrds! Git is cool\n");
	
	for (cnt = 0; cnt < sizeof(s); cnt++)
	{
		printf("%c", s[cnt]);
	}
	
	printf("\n");
	
	return EXIT_SUCCESS;
}
