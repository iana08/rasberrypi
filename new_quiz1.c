#include <stdio.h>
#include <string.h>
struct holder
{
	int value;
	char * sentence;
};

int main(int argc, char * argv[])
{
	struct holder curr;
	int i = 0;
	curr.value = 1;
	curr.sentence = "Ian Is The Greatest Of \0 All Time.\n";
	while(i < strlen(curr.sentence))
	{
		printf("%s ", &curr.sentence[i]);
		i++;
	}
}
