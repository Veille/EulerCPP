// Euler002.cpp
// The second project euler problem, solved in c++
// https://projecteuler.net/problem=2
// Problem:
// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//			1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even - valued terms.
//
// Answer: 4613732

#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
	// timer
	std::clock_t start;
	long double duration;
	start = std::clock();

	int sum = 2;
	int roof = 4000000;
	int termOne = 1;
	int termTwo = 2;
	int termThree = termOne + termTwo;
	int temp;

	while (termThree <= roof) {
		temp = termThree + termTwo;
		termOne = termTwo;
		termTwo = termThree;
		termThree = temp;

		if (termThree % 2 == 0) {
			sum += termThree;
		}
	}

	// retrieve time
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
	std::cout << "Time taken: " << std::setprecision(10) << std::fixed << duration << std::endl;

	std::cout << "Answer: " << sum << std::endl;
	std::cin.get();
}