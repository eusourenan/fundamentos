#include <stdio.h>

int main()
{
    // 1. Declare an integer variable and initialize it with a value
    int myVariable = 100;

    // 2. Declare a pointer of the same type (int*)
    //    and assign it the memory address of 'myVariable' using the '&' operator.
    int *myPointer = &myVariable;

    // 3. Print the value of 'myVariable' using only the dereference operator (*) on 'myPointer'.
    //    The '*' operator, when used with a pointer, accesses the value stored at the address
    //    the pointer holds.
    printf("--- Accessing Value via Pointer ---\n");
    printf("Value of myVariable (accessed via pointer): %d\n", *myPointer);
    printf("\n");

    // For demonstration, you can also see the address and the original variable's value
    printf("Original variable's address: %p\n", (void*)&myVariable);
    printf("Pointer's stored address: %p\n", (void*)myPointer);
    printf("Original variable's value: %d\n", myVariable);

    return 0;
}
