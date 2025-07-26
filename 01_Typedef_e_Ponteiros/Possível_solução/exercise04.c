#include <stdio.h>

int main()
{
    // 1. Declare an integer variable and assign an initial value.
    int myNumber = 10;

    // 2. Print the initial value of the variable.
    printf("--- Changing Variable Value Using Pointer ---\n\n");
    printf("Initial value of myNumber: %d\n", myNumber);

    // 3. Declare an integer pointer and make it point to 'myNumber'.
    int *ptrToNumber = &myNumber;

    // 4. Use the pointer to change the value of 'myNumber'.
    //    By dereferencing the pointer (*ptrToNumber) and assigning a new value,
    //    we are directly modifying the content at the memory address that ptrToNumber holds,
    //    which is the memory address of myNumber.
    *ptrToNumber = 25; // Change the value of myNumber through the pointer

    // 5. Print the final value of the variable.
    printf("Final value of myNumber (after change via pointer): %d\n", myNumber);

    printf("\n");

    return 0;
}
