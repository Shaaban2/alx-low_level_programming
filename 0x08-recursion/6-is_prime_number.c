/*
 * A helper function to determine if a given number is prime by recursively
 * checking if it has any divisors.
 *
 * @param n: the integer to check for primality
 * @param m: a divisor of n to check
 * @return: 1 if n is prime, 0 if it has any divisors
 */
int has_no_divisors(int n, int m)
{
    if (m % n == 0) {
        // n has a divisor other than 1 and itself
        return 0;
    } else if (m / 2 > n) {
        // Check the next odd number as a divisor
        return has_no_divisors(n + 2, m);
    } else {
        // n has no divisors other than 1 and itself
        return 1;
    }
}

/*
 * A function to check if a given number is prime by calling a helper function.
 *
 * @param n: the integer to check for primality
 * @return: 1 if n is prime, 0 if it has any divisors or is less than 2
 */
int is_prime_number(int n)
{
    if ((!(n % 2) && n != 2) || n < 2) {
        // Even numbers other than 2 are not prime, neither are negative numbers or 1
        return 0;
    } else {
        // Check if n has any divisors other than 1 and itself
        return has_no_divisors(3, n);
    }
}
