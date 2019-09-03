#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct node
{
	int value;
	char * secert;
};

void switch_cakes(struct node * cake);

int main(int argv, char * argc[])
{
	char * today = " Monday";
	if(strcmp(today, "Monday ") == 0)
	{
		printf("Garfield... oh you...\n");
	}

	struct node cake;
	cake.value = rand() % 5;
	cake.secert = "Totally not going to change.\n";
	int i;
	for(i = pow(2, 31) - 1; i > 0 ; i--)
	{
		if(cake.value == i)
		{
			printf("Congrats now for part 1\n");
			switch_cakes(&cake);
		}
	}

	printf("I cant believe you done this, Now I can't believe everyting is\n %s\n", cake.secert);
}

void switch_cakes(struct node * cake)
{
	printf("Who are you?\n");
	struct node is;
	is.value = 5;
	is.secert = "a Lie";
	printf("I can tell you but let me get ready.\n");
	cake = &is;
	printf("What have you done?!, now everything is \n");
	while(rand() % 100090 != cake -> value)
	{
// Nothing here just wasting your time...
	}
	printf("%s\n", cake->secert);
}
