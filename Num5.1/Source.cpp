#include "Header.h"

double* memoryToArray(double* first, int n) {
	first = new double[n];
	return first;
}

void fillArray(double* first, int n) {
	for (int i = 0; i < n; i++) {
		first[i] = rand() % 100;
	}
}

void printArray(double* first, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << first[i] << " ";
	}
	std::cout << "\n";
}

void memoryDelete(double* first) {
	delete[] first;
	
}