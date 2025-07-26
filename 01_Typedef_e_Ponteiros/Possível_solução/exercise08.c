#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check if a command-line argument was provided
    if (argc != 2)
    {
        printf("Usage: %s <string_argument>\n", *argv); // argv[0] is the program name
        printf("Please provide a string as a command-line argument to parse.\n");
        return 1; // Indicate an error by returning a non-zero value
    }

    // Get a pointer to the first command-line argument (which is at argv[1]).
    // argv is an array of char pointers, so *(argv + 1) gives us the char pointer
    // to the beginning of the second string in the command-line arguments.
    char *current_char_ptr = *(argv + 1);

    while (*current_char_ptr != '\0')
    {
        // Check if the character currently pointed to is a space.
        // We use the dereference operator (*) to access the character value.
        if (*current_char_ptr == ' ') {
            // If it's a space, print a newline character.
            // This separates the words.
            printf("\n");
        } else {
            // If it's not a space, print the character itself.
            printf("%c", *current_char_ptr);
        }
        current_char_ptr++;
    }
    printf("\n");

    return 0;
}
