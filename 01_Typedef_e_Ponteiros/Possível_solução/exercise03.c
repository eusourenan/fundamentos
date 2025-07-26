#include <stdio.h>

int main() {
    // 1. Declare two character arrays (strings) to store full names.
    //    Strings in C are null-terminated character arrays.
    char duoMember1[] = "Alice Wonderland";
    char duoMember2[] = "Bob The Builder";

    printf("--- Printing Names Using Dereference Operator ---\n\n");

    // --- Print Duo Member 1's Name ---
    printf("Duo Member 1: ");
    // Declare a character pointer and initialize it with the address of the first character of the array.
    // When an array name is used without brackets, it decays into a pointer to its first element.
    char *ptr1 = duoMember1;

    // Loop through the string until the null terminator ('\0') is found.
    // The dereference operator (*) is used to access the character at the current pointer location.
    while (*ptr1 != '\0') {
        printf("%c", *ptr1); // Print the character pointed to by ptr1
        ptr1++;             // Move the pointer to the next character in the array
    }
    printf("\n"); // Newline after printing the name

    // --- Print Duo Member 2's Name ---
    printf("Duo Member 2: ");
    char    *ptr2 = duoMember2;
    int     index = 0;

    while (*(ptr2 + index) != '\0') {
        printf("%c", *(ptr2 + index)); // Print the character pointed to by ptr2
        index++;             // Move the pointer to the next character
    }
    printf("\n"); // Newline after printing the name

    printf("\n");

    return 0;
}
