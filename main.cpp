#include <iostream>
#include <cmath>
#include <cassert>


using namespace std;

void checkAllSolutions();

int problem1(int);

int main(int argc, char** argv) {
	checkAllSolutions();
}

void checkAllSolutions() {
	assert(problem1(1000) == 233168);
	cout << "Problem 1 was solved correctly" << endl;
}

int problem1(int limit) {
	int total = 0;
	for (int i = 0; i < limit; i++) {
		if (i%3 == 0 || i%5 ==0)
			total+=i;
	}
	return total;
}