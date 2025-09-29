import math

def is_prime(n):
    """Checks if a number is prime."""
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def find_prime_sum(num):
    """Finds and prints all pairs of prime numbers that sum up to num."""
    found = False
    for i in range(2, num // 2 + 1):
        if is_prime(i):
            complement = num - i
            if is_prime(complement):
                print(f"{num} = {i} + {complement}")
                found = True
    
    if not found:
        print(f"No pair of prime numbers found for {num}.")

# --- Main execution ---
number_to_check = 34
find_prime_sum(number_to_check)