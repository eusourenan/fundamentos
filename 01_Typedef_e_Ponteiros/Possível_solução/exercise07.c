#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main() {
    // 1. Declare two character arrays (strings) to store full names in lowercase.
    char duoMember1[] = "alice wonderland";
    char duoMember2[] = "bob the builder";

    printf("--- Printing Names in Uppercase and Reversed Using Dereference Operator ---\n\n");

    // --- Process Duo Member 1 ---
    printf("Duo Member 1:\n");

    // Print in uppercase
    printf("  Uppercase: ");
    char *ptr1 = duoMember1; // Pointer to the start of the string for uppercase conversion
    while (*ptr1 != '\0') {
        printf("%c", toupper(*ptr1)); // Convert to uppercase and print
        ptr1++;                       // Move to the next character
    }
    printf("\n");

    // Print reversed
    printf("  Reversed: ");

    // Loop backwards from the last character to the first
    while (ptr1 > duoMember1) // check if ptr1 value is bigger than the address of douMember1 start
    {
        ptr1--;              // Move the pointer backwards (don't print the \0 character)
        printf("%c", *ptr1); // Print the character pointed to
    }
    printf("\n\n");

    // --- Process Duo Member 2 ---
    printf("Duo Member 2:\n");

    // Print in uppercase
    printf("  Uppercase: ");
    char *ptr2_upper = duoMember2; // Pointer to the start of the string for uppercase conversion
    while (*ptr2_upper != '\0') {
        printf("%c", toupper(*ptr2_upper)); // Convert to uppercase and print
        ptr2_upper++;                       // Move to the next character
    }
    printf("\n");

    // Print reversed
    printf("  Reversed: ");
    char *ptr2_reversed = duoMember2; // Pointer to the start of the string
    int len2 = strlen(duoMember2);    // Get the length of the string

    // Move the pointer to the last character of the string (before the null terminator)
    ptr2_reversed = ptr2_reversed + len2 - 1;

    // Loop backwards from the last character to the first
    while (len2 > 0) {
        printf("%c", *ptr2_reversed); // Print the character pointed to
        ptr2_reversed--;              // Move the pointer backwards
        len2--;                       // Decrement length counter
    }
    printf("\n\n");

    return 0;
}
