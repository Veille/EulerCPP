// Euler001.cpp
// The first project euler problem, solved in c++
// https://projecteuler.net/problem=1
// Problem:
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// Answer: 233168

#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
	// timer
	std::clock_t start;
	long double duration;
	start = std::clock();

	int roof = 1000;
	int sum = 0;

	for (int i = 0; i < roof; i++){
		if (((i % 3) == 0) || ((i % 5) == 0)){
			sum += i;
		}
	}
	// retrieve time
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
	std::cout << "Time taken: " << std::setprecision(10) << std::fixed << duration << std::endl;

	std::cout << "Answer: " << sum << std::endl;
	std::cin.get();
}