#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	char* in = argv[1];
	int i = 0;
	
	while(*in != '\0') {
		printf("%c",(char)((int)*in+i));
		*in++;
		i++;
	}
	printf("\n");
	return 0;
}