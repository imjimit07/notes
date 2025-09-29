#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    bool found = false;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i)) {
            if (isPrime(num - i)) {
                printf("%d = %d + %d\n", num, i, num - i);
                found = true;
            }
        }
    }
    if (!found) {
        printf("No pair of prime numbers found for %d.\n", num);
    }
    return 0;
}