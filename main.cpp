#include <iostream>
#include <cmath>
#include <cassert>


using namespace std;

void checkAllSolutions();

int problem1(int);
int problem2();

int main(int argc, char** argv) {
	checkAllSolutions();
}

void checkAllSolutions() {
	assert(problem1(1000) == 233168);
	cout << "Problem 1 was solved correctly" << endl;
	assert(problem2() == 4613732);
	cout << "Problem 2 was solved correctly" << endl;
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