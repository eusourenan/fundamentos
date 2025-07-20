#include "lib.h"

void	print_num(char num)
{
	char	digit;

	if (num > 9)
		print_num(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

void	exercise05(char *str_number)
{
	int number = atoi(str_number);

	while (number != 42)
	{
		print_num(number);
		write(1, ", ", 2);
		if (number > 42)
			number--;
		else
			number++;
	}
	print_num(number);
	write(1, "\n", 2);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return (1);
	}
	exercise05(argv[1]);
	return 0;
}
