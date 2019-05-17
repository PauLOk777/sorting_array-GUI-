#include "Functions.h"
#include <ctime>
#include <string>

void randomFillingArray(double* Array, int &size, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		Array[i] = rand() % (end - begin + 1) + begin;
	}
}