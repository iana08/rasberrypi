#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	FILE * fd_in;
	int count_this = 0;
	char ch[128];

	fd_in = fopen(argv[1], "r");
	if(fd_in == NULL)
	{
		printf("Can't open.... and where did it lead you?... \n");
		printf("Right back here to me\n");
		printf("*SNAP*\n");
		exit(1);
	}
	while(fgets(ch, 128, fd_in) != NULL)
	{
		if(*ch == '\n')
		{	
			count_this++;
		}
		
	}

	fclose(fd_in);

	printf("What will this be?: %d\n", count_this);
	return 0;
}
