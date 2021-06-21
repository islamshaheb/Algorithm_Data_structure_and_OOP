// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
// of divisors of a number
int divisor(int a)
{
	int div = 1, count = 0;
	for (int i = 2; i <= sqrt(a); i++) {

		// Count the powers of the current
		// prime i which divides a
		while (a % i == 0) {
			count++;
			a = a / i;
		}

		// Update the count of divisors
		div = div * (count + 1);

		// Reset the count
		count = 0;
	}

	// If the remaining a is prime then a^1
	// will be one of its prime factors
	if (a > 1) {
		div = div * (2);
	}
	return div;
}

// Function to count numbers having odd
// number of divisors in range [A, B]
int OddDivCount(int a, int b)
{
	// To store the count of elements
	// having odd number of divisors
	int res = 0;

	// Iterate from a to b and find the
	// count of their divisors
	for (int i = a; i <= b; ++i) {

		// To store the count of divisors of i
		int divCount = divisor(i);

		// If the divisor count of i is odd
		if (divCount % 2) {
			++res;
		}
	}
	return res;
}

// Driver code
int main()
{
	int a = 100, b = 10000000;
	cout << OddDivCount(a, b);

	return 0;
}
// This code is contributed by jrolofmeister
