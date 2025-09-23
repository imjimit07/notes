# Python program to find whether a number is a palindrome or not

# Function to reverse a number

def is_palindrome(n):
    return str(n) == str(n)[::-1]

num = int(input("Enter a number: "))
print("Entered number is a palindrome." if is_palindrome(num) else "Entered number is not a palindrome.")

'''
TEST CASES
INPUT
Enter a number:3445443
Entered number is palindrome.

OUTPUT
Enter a number:234
Entered number is not a palindrome.
'''