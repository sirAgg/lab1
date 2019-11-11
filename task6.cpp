#include <iostream>
#include <conio.h>

int main()
{
    int num_primes;
    std::cout << "Enter number of primes to calculate: ";
    std::cin >> num_primes;

    std::cout << "2\n"; // special case for 2

    int prime_candidate = 3;

    for(int i=0; i<num_primes-1; )
    {
        int divisor = 1; // first divisor that is checked is 3
        do {
            divisor += 2;
            if (divisor*divisor > prime_candidate)
            {
                std::cout << prime_candidate << "\n"; 
                i++;
                break;
            }
        } while (prime_candidate%divisor != 0);

        prime_candidate += 2;
    }

	getch();
    return 0;
}
