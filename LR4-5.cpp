#include <iostream>

using namespace std;

void isPrime(int onenumber) {
    {
        if (onenumber <= 1) {
            cout << onenumber << " is a prime number." << std::endl;
        }

        for (int i = 2; i < onenumber; i++) {
            if (onenumber % i == 0) {
                cout << onenumber << " is a NOT prime number." << std::endl;
            }
        }
    }
}


int main() {
    int onenumber;
    std::cout << "Enter a number: ";
    std::cin >> onenumber;

    isPrime(onenumber);

}