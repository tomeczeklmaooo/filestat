#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	// if no args: return 0
	if (argc == 1)
	{
		printf("No arguments passed: exiting...\n");
		return 0;
	}

	for (int i = 0; i < argc; i++)
	{
		if (strcmp(argv[i], "help") == 0)
		{
			printf("Something about the program, and help for it.\n");
		}
	}

	return 0;
}