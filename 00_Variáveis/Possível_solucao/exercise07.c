#include "lib.h"

void	exercise07(char *input)
{
	while (*input)
	{
		write(1, input, 1);
		input++;
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return 1;
	}
	exercise07(argv[1]);
	return 0;
}
