#include "lib.h"

/***
 * Imagine that the names of the people in my team are:
 * - Gioconda Ronda Mujiro
 * - Pascoalito de Ilhita
 * - Renan Leite Silva
 * - Anabele Belle Bella
 */

void	exercise02()
{
	// Create a temp array with the initials and the \n char
	// Then, make the name pointer get the address
	char	*name = (char[]){71, 82, 77, 10, 0};

	// Print each number, one at time
	for (int index = 0; name[index] != 0; index++)
	{
		printf("%d ", name[index]);
	}
	printf("\n"); // Beauty print \o/

	// Create a new temp array to the new name 
	// and repeat the process for the other names
	name = (char []){80, 100, 73, 10, 0};
	for (int index = 0; name[index] != 0; index++)
	{
		printf("%d ", name[index]);
	}
	printf("\n");

	name = (char []){82, 76, 83, 10, 0};
	for (int index = 0; name[index] != 0; index++)
	{
		printf("%d ", name[index]);
	}
	printf("\n");

	name = (char []){65, 66, 66, 10, 0};
	for (int index = 0; name[index] != 0; index++)
	{
		printf("%d ", name[index]);
	}
	printf("\n");
}

/** 
 * Look, the type of the variable "name" is char but, only numbers are defined.
 * Still the program works and print the nunmbers as int in the terminal.
 * Why?
 **/

int	main()
{
	exercise02();
	return 0;
}