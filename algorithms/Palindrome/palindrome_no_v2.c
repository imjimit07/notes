/*
This program checks whether the enterd number is palindrome or not and generates output according to input provided.
*/

#include <stdio.h>
int main() {
    int n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (temp = n; temp > 0; temp /= 10) {
        rev = rev * 10 + temp % 10;
    }
    printf("Entered number is %sa palindrome.\n", (n == rev) ? "" : "not ");
    return 0;
}

/*
  INPUT:
	n=12456
  OUTPUT:
  	Entered number is not palindrome.
  
  INPUT:
  	n=12821
  OUTPUT:
  	Entered number is palindrome.
*/