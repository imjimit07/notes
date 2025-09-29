#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 34;
    bool found = false;

    for (int i = 2; i <= num / 2; ++i) {
        if (isPrime(i)) {
            if (isPrime(num - i)) {
                std::cout << num << " = " << i << " + " << (num - i) << std::endl;
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "No pair of prime numbers found for " << num << "." << std::endl;
    }

    return 0;
}