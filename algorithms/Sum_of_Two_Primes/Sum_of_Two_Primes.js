function isPrime(n) {
  if (n <= 1) {
    return false;
  }
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) {
      return false;
    }
  }
  return true;
}

function findPrimeSum(num) {
  let found = false;
  for (let i = 2; i <= num / 2; i++) {
    if (isPrime(i)) {
      if (isPrime(num - i)) {
        console.log(`${num} = ${i} + ${num - i}`);
        found = true;
      }
    }
  }

  if (!found) {
    console.log(`No pair of prime numbers found for ${num}.`);
  }
}

// --- Main execution ---
const numberToCheck = 34;
findPrimeSum(numberToCheck);