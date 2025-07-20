#include "lib.h"

void	print_num(char num)
{
	char	digit;

	if (num > 9)
		print_num(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

void	exercise08(char *input)
{
	for (int index = 0; input[index] != 0; input++)
	{
		print_num(input[index]);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return 1;
	}
	exercise08(argv[1]);
	return 0;
}
