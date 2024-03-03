#include <stdio.h>
#include <stdarg.h>

// Function that accepts a variable number of arguments
void printNumbers(int numArgs, ...) {
    // Initialize a variable of type va_list to access the arguments
    va_list args;
    
    // Start iterating through the variable arguments
    va_start(args, numArgs);
    
    // Loop through the arguments and print each one
    for (int i = 0; i < numArgs; ++i) {
        // Use va_arg macro to retrieve the next argument of the specified type
        int num = va_arg(args, int);
        printf("%d ", num);
    }
    
    // Clean up the va_list variable
    va_end(args);
}

int main() {
    // Call the function with different numbers of arguments
    printNumbers(3, 1, 2, 3);  // Output: 1 2 3
    printf("\n");
    printNumbers(5, 10, 20, 30, 40, 50);  // Output: 10 20 30 40 50
    printf("\n");
    printNumbers(0);  // Output: (nothing)
    
    return 0;
}
