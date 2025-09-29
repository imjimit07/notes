import java.lang.Math;

public class Sum_of_Two_Primes {

    // Function to check if a number is prime
    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int num = 34; // The number to express as a sum of two primes
        boolean found = false;

        for (int i = 2; i <= num / 2; i++) {
            if (isPrime(i)) {
                if (isPrime(num - i)) {
                    System.out.printf("%d = %d + %d\n", num, i, num - i);
                    found = true;
                }
            }
        }

        if (!found) {
            System.out.printf("No pair of prime numbers found for %d.\n", num);
        }
    }
}