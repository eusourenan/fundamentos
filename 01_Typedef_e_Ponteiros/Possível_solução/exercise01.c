#include <stdio.h>

int main()
{
    // --- Integer Example ---

    // 1. Declare an integer variable and initialize it
    int myInt = 42;

    // 2. Print the memory address of 'myInt' using the pointer format (%p)
    //    The '&' operator gives the memory address of a variable.
    printf("--- Integer (int) ---\n");
    printf("Address of myInt: %p\n", (void*)&myInt); // Cast to void* is good practice for %p

    // 3. Print the value of 'myInt' in decimal format (%d)
    printf("Value of myInt: %d\n", myInt);
    printf("\n");

    // --- Character Example ---

    // Declare a character variable
    char myChar = 'A';
    printf("--- Character (char) ---\n");
    printf("Address of myChar: %p\n", (void*)&myChar);
    printf("Value of myChar: %c (character)\n", myChar);
    printf("Value of myChar: %d (ASCII decimal)\n", myChar); // Chars can also be printed as their ASCII value
    printf("\n");

    // --- Float Example ---

    // Declare a float variable
    float myFloat = 3.14f; // 'f' suffix indicates a float literal
    printf("--- Float (float) ---\n");
    printf("Address of myFloat: %p\n", (void*)&myFloat);
    printf("Value of myFloat: %f\n", myFloat);
    printf("\n");

    // --- Double Example ---

    // Declare a double variable
    double myDouble = 123.456789;
    printf("--- Double (double) ---\n");
    printf("Address of myDouble: %p\n", (void*)&myDouble);
    printf("Value of myDouble: %lf\n", myDouble); // %lf for double
    printf("\n");

    // --- Pointer Variable Example ---

    // Declare an integer pointer and make it point to myInt
    int *ptrToInt = &myInt;
    printf("--- Pointer Variable (int*) ---\n");
    printf("Address of ptrToInt itself: %p\n", (void*)&ptrToInt); // Address where the pointer variable is stored
    printf("Value of ptrToInt (address it holds): %p\n", (void*)ptrToInt); // The address myInt
    printf("Value pointed to by ptrToInt (*ptrToInt): %d\n", *ptrToInt); // Dereference to get the value
    printf("\n");

    return 0;
}
