#include <stdio.h>

struct value_next
{
	int value;
	struct value_next * next;
};

struct value_next * root;

int main(int argc, char * argv[])
{
	struct value_next * curr;
	if(root != NULL)
	{
		curr = root;
	}
	int i = 0;
	while(i < 10)
	{
		struct value_next tmp;
		tmp.value = i++;

		if (root == (struct value_next *)NULL)
		{
			root = &tmp;
		}
		else
		{
			curr -> next = &tmp;
		}
	}

	struct value_next * current;
	current = root;
	while(current != NULL)
	{
		printf("%d ", current -> value);
		current = current -> next;
	}
	printf("\n");
}
