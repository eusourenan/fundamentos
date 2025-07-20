#include "lib.h"

void	print_num(char num)
{
	char	digit;

	if (num > 9)
		print_num(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

void	exercise04()
{
	for (char num = 0; num <= 42; num++)
	{
		print_num(num);
		write(1, "\n", 1);
	}
}

int	main()
{
	exercise04();
	return 0;
}