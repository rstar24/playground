#include <bits/stdc++.h>
#include <chrono>
#include <gmp.h>
using namespace std;

int main(){

    auto start = chrono::high_resolution_clock::now();
    // long long int's biggest size 9223372036854775807;
    mpz_t a, b, result;
    mpz_init(a);
    mpz_init(b);
    mpz_init(result);

    mpz_set_str(a, "123456789012345678901234567890", 10);
    mpz_set_str(b, "987654321098765432109876543210", 10);

    mpz_add(result, a, b);  // Perform addition

    std::cout << "Result: ";
    mpz_out_str(stdout, 10, result);  // Print result
    std::cout << std::endl;

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(result);
    


    // ofstream myfile("test_file.txt");
    // if(!myfile){
    //     cerr << "Error openin file for writing" << endl;
    //     return 1;
    // }

    // for (long long int i = 0; i < 1000000; i++){
    //     myfile <<  i << "^2 = "<<i*i << endl;
    // }

    // myfile.close();

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    cout << "Time taken : " << duration.count() << "s" << endl;



    return 0 ;
}