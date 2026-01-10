#include <gmpxx.h>
#include <iostream>
#include <cmath>

// Function to compute the nth Fibonacci number using Binet's formula
void fibonacci_binet(mpz_t result, unsigned long n) {
    // Calculate sqrt(5) with high precision
    mpf_t sqrt5;
    mpf_init2(sqrt5, 256); // Initialize with a precision of 256 bits
    mpf_set_ui(sqrt5, 5);
    mpf_sqrt(sqrt5, sqrt5);

    // Calculate the golden ratio: φ = (1 + sqrt(5)) / 2
    mpf_t phi;
    mpf_init2(phi, 256);
    mpf_set_ui(phi, 1);
    mpf_add(phi, phi, sqrt5);
    mpf_div_ui(phi, phi, 2);

    // Calculate ψ = (1 - sqrt(5)) / 2
    mpf_t psi;
    mpf_init2(psi, 256);
    mpf_set_ui(psi, 1);
    mpf_sub(psi, psi, sqrt5);
    mpf_div_ui(psi, psi, 2);

    // Calculate φ^n
    mpf_t phi_n;
    mpf_init2(phi_n, 256);
    mpf_pow_ui(phi_n, phi, n);

    // Calculate ψ^n
    mpf_t psi_n;
    mpf_init2(psi_n, 256);
    mpf_pow_ui(psi_n, psi, n);

    // Calculate (φ^n - ψ^n) / sqrt(5)
    mpf_sub(phi_n, phi_n, psi_n);
    mpf_div(phi_n, phi_n, sqrt5);

    // Round the result to the nearest integer and set it to result
    // Here we use mpf_get_str to convert to string and then set the integer
    char *str = mpf_get_str(NULL, NULL, 10, 0, phi_n);
    mpz_set_str(result, str, 10);
    free(str);

    // Clear GMP floating-point variables
    mpf_clear(sqrt5);
    mpf_clear(phi);
    mpf_clear(psi);
    mpf_clear(phi_n);
    mpf_clear(psi_n);
}

int main() {
    unsigned long n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Result variable for Fibonacci number
    mpz_t fib_n;
    mpz_init(fib_n);

    // Calculate the nth Fibonacci number
    fibonacci_binet(fib_n, n);

    // Output the result
    std::cout << "F(" << n << ") = ";
    mpz_out_str(stdout, 10, fib_n);
    std::cout << std::endl;

    // Clear GMP integer variable
    mpz_clear(fib_n);

    return 0;
}

