#include <stdio.h>
#include <stdlib.h>

int get_file_stats(char *filename)
{
	int line_count = 0;
	int word_count = 0;
	int char_count = 0;
	long file_size = 0; // bytes

	FILE *fptr;
	int current_char;

	fptr = fopen(filename, "r");

	if (fptr == NULL)
	{
		printf("Cannot open file '%s': is the filename/filetype correct?\n", filename);
		return 1;
	}

	// count lines
	while ((current_char = fgetc(fptr)) != EOF)
	{
		if (current_char == '\n')
		{
			line_count++;
		}
		char_count++;
	}
	line_count++; // increment once more to match actual line count

	// file size
	if (fseek(fptr, 0, SEEK_END) < 0)
	{
		fclose(fptr);
		return -1;
	}

	file_size = ftell(fptr);

	fclose(fptr);

	printf("File statistics for '%s':\n", filename);
	printf("Line count: %d\nWord count: %d\nChar count: %d\nFile size: %ld bytes\n", line_count, word_count, char_count, file_size);

	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("No arguments passed: exiting...\n");
		return 0;
	}
	else if (argc > 2)
	{
		printf("Too many arguments passed: exiting...\n");
		return 0;
	}

	get_file_stats(argv[1]);

	return 0;
}