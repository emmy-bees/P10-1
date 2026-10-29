//Introductory Programming Lab 10 -- Emerson Beesley -- October 29, 2026

#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
	int number[10];
	srand(time(0));
	// print the numbers (first bullet point)
	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {
		do {
			number[i] = (rand());
		} while ( !((1000 <= number[i]) && (number[i] <= 9999)) );
		cout << number[i] << " ";
	}

	//find even numbers
	cout << endl << "Even indices: ";
	for (int i = 0; i < 10; i += 2) {
		cout << number[i] << " ";
	}


}