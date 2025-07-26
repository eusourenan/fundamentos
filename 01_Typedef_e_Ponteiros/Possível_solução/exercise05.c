#include <stdio.h>

int main() {
    // --- Changing Variable Value Using Pointer (from previous example) ---
    int myNumber = 10;
    printf("--- Changing Variable Value Using Pointer ---\n\n");
    printf("Initial value of myNumber: %d\n", myNumber);
    int *ptrToNumber = &myNumber;
    *ptrToNumber = 25;
    printf("Final value of myNumber (after change via pointer): %d\n", myNumber);
    printf("\n");

    // --- Array Traversal Using Pointers ---

    // 1. Declare an integer array of 5 positions and initialize it.
    int myArray[5] = {10, 20, 30, 40, 50};

    // 2. Declare an integer pointer and make it point to the beginning of the array.
    //    When an array name is used without brackets, it decays into a pointer to its first element.
    int *ptrToArray = myArray; // Same as int *ptrToArray = &myArray[0];

    printf("--- Array Values Printed Using Pointer Syntax ---\n\n");

    // Print all values using ptr[i] syntax
    printf("Using ptr[i] syntax:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, ptrToArray[i]);
    }
    printf("\n");

    // Print all values using *(ptr + i) syntax
    printf("Using *(ptr + i) syntax:\n");
    for (int i = 0; i < 5; i++) {
        // The expression *(ptrToArray + i) dereferences the memory address
        // that is 'i' positions away from the starting address held by ptrToArray.
        printf("Element %d: %d\n", i, *(ptrToArray + i));
    }
    printf("\n");

    return 0;
}
