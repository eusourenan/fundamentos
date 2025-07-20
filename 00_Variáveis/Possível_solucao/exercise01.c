# include "lib.h"

/***
 * Imagine that the names of the people in my team are:
 * - Gioconda Ronda Mujiro
 * - Pascoalito de Ilhita
 * - Renan Leite Silva
 * - Anabele Belle Bella
 */

void	exercise01()
{
	// Create a temp array with the initials and the \n char
	// Then, make the name pointer get the address
	char	*name = (char[]){71, 82, 77, 10};

	// Print exactly the name widht with the \n char
	write(1, name, 4);

	// Create a new temp array to the new name 
	// and repeat the process for the other names
	name = (char []){80, 100, 73, 10};
	write(1, name, 4);

	name = (char []){82, 76, 83, 10};
	write(1, name, 4);

	name = (char []){65, 66, 66, 10};
	write(1, name, 4);

}

/** 
 * Look, the name pointer type is char but, only numbers are defined in de values.
 * Instead of that, the program works to print the names as char in the terminal.
 * Why?
 **/

int main()
{
	exercise01();
	return 0;
}
