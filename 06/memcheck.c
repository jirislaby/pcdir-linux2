#include <stdlib.h>

char *mem1, *mem2;

int main(void)
{
	mem1 = malloc(1000);
	mem2 = malloc(1000);

	free(mem2);
	mem2[3] = 10;

	return mem1[2000];
}
