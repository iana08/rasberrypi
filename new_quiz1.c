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
	curr.value = 1;
	curr.sentence = "SSH my\0pi\n";
	int i = curr.value;
	while(i < strlen(curr.sentence))
	{
		printf("%s ", &curr.sentence[i]);
		i++;
	}
	printf("\ncurr.value = %d", i);
}
