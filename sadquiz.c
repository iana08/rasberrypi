#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char * argv[])
{
	int fd_in;
	int count;
	char buf[1];
	int count_this = 0;

	fd_in = open(argv[1], O_RDONLY);
	if(fd_in < 0)
	{
		printf("Can't open.... and where did it lead you?... \n");
		printf("Right back here to me\n");
		printf("*SNAP*\n");
		exit(1);
	}
	
	while((count = read(fd_in, buf, 1)) > 0)
	{
		count_this++;
	}

	close(fd_in);

	printf("What will this be?: %d\n", count_this);
}
