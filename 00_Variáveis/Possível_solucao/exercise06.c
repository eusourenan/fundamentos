#include "lib.h"

void	exercise06(char *str_number)
{
	int	number = atoi(str_number);

	if (number < 0)
	{
		printf("-");
		number = -number;
	}
	while (number != 0)
	{
		printf("%d", number % 10);
		number = number / 10;
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return 1;
	}
	exercise06(argv[1]);
	return 0;
}
