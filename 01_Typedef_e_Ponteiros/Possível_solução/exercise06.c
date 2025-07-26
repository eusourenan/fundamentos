#include <stdio.h>

int main()
{
    char myString[] = "Hello";

    // Print the initial string.
    printf("Initial string: %s\n", myString);

    // Declare a character pointer and make it point to the beginning of the string.
    char *ptrToString = myString;

    // Change a letter at the third position (index 2, as arrays are 0-indexed).
    *(ptrToString + 2) = 'X';

    // Print the string again to show the modification.
    printf("String after changing third letter: %s\n", myString);

    return 0;
}
