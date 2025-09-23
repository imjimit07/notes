# Python program to find whether a string is a palindrome or not

# Function to reverse a string

def is_palindrome(n):
    return n == n[::-1]

num = int(input("Enter a string: "))
print("Entered string is a palindrome." if is_palindrome(num) else "Entered string is not a palindrome.")

'''
TEST CASES
INPUT
Enter a string:abcdcba
Entered string is palindrome.

OUTPUT
Enter a string:abc
Entered string is not a palindrome.
'''