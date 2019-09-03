#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 10

int main(int argc, char * argv[])
{
	int i = 0;
	int sum = 0; // cause who doesn't like math???
	while(i < argc)
	{
		sum +=  atoi(argv[i]) + MAX_VAL;
		i++;
	}
	printf("%d", sum);
	printf("\n");
}
