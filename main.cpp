#include <iostream>
#include <cmath>
#include <cassert>
#include <stdint.h>

using namespace std;

void checkAllSolutions();

int problem1(int);
int problem2();
int problem3(int64_t number);
int problem4();
int problem5(int naturals);

int main(int argc, char** argv) {
	checkAllSolutions();
}

void checkAllSolutions() {
	assert(problem1(1000) == 233168);
	cout << "Problem 1 was solved correctly" << endl;
	assert(problem2() == 4613732);
	cout << "Problem 2 was solved correctly" << endl;
	assert(problem3(600851475143) == 6857);
	cout << "Problem 3 was solved correctly" << endl;
	assert(problem4() == 906609);
	cout << "Problem 4 was solved correctly" << endl;
	assert(problem5(20) == 232792560);
	cout << "Problem 5 was solved correctly" << endl;

}

int problem1(int limit) {
	int total = 0;
	for (int i = 0; i < limit; i++) {
		if (i%3 == 0 || i%5 ==0)
			total+=i;
	}
	return total;
}

int problem2() {
	int total = 0;
	int a = 1;
	int b = 1;
	int max = 4000000;
	while(a < max) {
		int temp = a;
		a = a + b;
		b = temp;
		if (a%2 == 0)
			total +=a;
	}
	return total;
}
int problem3(int64_t number) {
	int divisor = 1;
	int max = 0;
	while(number%2 == 0) {
		number /= 2;
		max = 2;
	}
//	cout << number << endl;
	while(number >= divisor) {
		if(number%divisor == 0) {
			max = divisor;
			number/= divisor;
		}
		divisor++;
	}
	return max;
}

int reverseInt(int number) {
	int reversed = 0;
	int temp = number;
	while(temp != 0) {
		reversed *= 10;
		reversed += temp%10;
		temp /= 10;
	}
	return reversed;
}

bool checkPalendrome(int possible) {
	return (possible == reverseInt(possible));
}

int problem4() {
	int max = 0;
	for (int i = 1; i < 1000; i++) {
		for (int j = 0; j < 1000; j++) {
			int product = i*j;
			if (checkPalendrome(product) && product > max) {
				max = product;
			}
		}
	}
	return max;
}

int problem5(int naturals) {
	int number = 0;
	bool properlyDivisible = false;
	while (!properlyDivisible) {
		number++;
		properlyDivisible = true;
		for (int i = 1; i <= naturals; i++) {
			if (number%i != 0) {
				properlyDivisible = false;
				break;
			}
		}
	}
	return number;
}