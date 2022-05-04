#include "Header.h"

int main() {
	setlocale(0, "");
	double* array = new double;
	std::cout << "Введите кол-во элементов в массиве: \n";
	int n;
	std::cin >> n;
	array = memoryToArray(array, n);
	fillArray(array, n);
	printArray(array, n);
	memoryDelete(array);
	std::cout << "Введите размер нового массива чтобы продолжить, -1 чтобы завершить программу \n";
	std::cin >> n;
	while (n !=-1) {
		array = memoryToArray(array, n);
		fillArray(array, n);
		printArray(array, n);
		memoryDelete(array);
		std::cout << "Введите размер нового массива чтобы продолжить, -1 чтобы завершить программу \n";
		std::cin >> n;
	}
	return 0;
}