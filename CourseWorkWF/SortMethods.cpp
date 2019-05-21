#include "SortMethods.h"
#include <iostream>
#include <cmath>

using namespace std;

int selectionSort(double* Array, int size, int counter) {
	for (int i = counter; i < size; i++) {
		int index = i;
		double temp_1 = Array[i];
		for (int j = i; j < size; j++) {
			if (temp_1 > Array[j]) {
				temp_1 = Array[j];
				index = j;
			}
		}
		Array[index] = Array[i];
		Array[i] = temp_1;
		return index;
	}
}

void shellSort(double* Array, int size) {
	for (int i = (size - 1) / 2; i > 0; i /= 2) {
		for (int j = i; j != size; j++) {
			for (int k = j; k >= i; k -= i) {
				if (Array[k - i] > Array[k]) {
					swap(Array[k - i], Array[k]);
				}
			}
		}
	}
}

void down(double* Array, int Size, int i)
{
	while (2 * i + 1 < Size) {
		if (2 * i + 2 >= Size)
		{
			if (Array[i] <= Array[2 * i + 1])
			{
				swap(Array[i], Array[2 * i + 1]);
				i = 2 * i + 1;
				break;
			}
		}
		else
		{
			if (Array[2 * i + 1] > Array[2 * i + 2] && Array[i] < Array[2 * i + 1])
			{
				swap(Array[i], Array[2 * i + 1]);
				i = 2 * i + 1;
				continue;
			}
			if (Array[2 * i + 1] <= Array[2 * i + 2] && Array[i] < Array[2 * i + 2])
			{
				swap(Array[i], Array[2 * i + 2]);
				i = 2 * i + 2;
				continue;
			}
		}
		break;
	}
}

void heapSort(double* Array, int Size)
{
	int k = Size / 2 - 1, i = Size;
	while (k != -1)
	{
		down(Array, Size, k);
		k--;
	}
	Size--;
	while (Size != 0)
	{
		swap(Array[0], Array[Size]);
		down(Array, Size, 0);
		Size--;
	}
}