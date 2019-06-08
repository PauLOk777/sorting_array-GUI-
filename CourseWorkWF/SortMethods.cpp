#include "SortMethods.h"
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

void selectionSort(double* Array, int size, System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed) {
	for (int i = 0; i < size; i++) {
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
		chart->Series["value"]->Points->Clear();
		chart->Series["changed"]->Points->Clear();
		for (int l = 0; l < size; l++) {
			if (l == index || l == i) {
				chart->Series["changed"]->Points->AddXY(l + 1, Array[i]);
				continue;
			}
			chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
		}
		chart->Update();
		Sleep(speed);
	}
}

void shellSort(double* Array, int size, System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed) {
	for (int i = (size - 1) / 2; i > 0; i /= 2) {
		for (int j = i; j != size; j++) {
			for (int k = j; k >= i; k -= i) {
				if (Array[k - i] > Array[k]) {
					swap(Array[k - i], Array[k]);
					chart->Series["value"]->Points->Clear();
					chart->Series["changed"]->Points->Clear();
					for (int l = 0; l < size; l++) {
						if (l == k - i || l == k) {
							chart->Series["changed"]->Points->AddXY(l + 1, Array[j]);
							continue;
						}
						chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
					}
					chart->Update();
					Sleep(speed);
				}
			}
		}
	}
}

void down(double* Array, int Size, int i, System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed, int realSize)
{
	while (2 * i + 1 < Size) {
		if (2 * i + 2 >= Size)
		{
			if (Array[i] <= Array[2 * i + 1])
			{
				swap(Array[i], Array[2 * i + 1]);
				chart->Series["value"]->Points->Clear();
				chart->Series["changed"]->Points->Clear();
				for (int l = 0; l < realSize; l++) {
					if (l == i || l == 2 * i + 1) {
						chart->Series["changed"]->Points->AddXY(l + 1, Array[l]);
						continue;
					}
					chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
				}
				chart->Update();
				Sleep(speed);
				i = 2 * i + 1;
				break;
			}
		}
		else
		{
			if (Array[2 * i + 1] > Array[2 * i + 2] && Array[i] < Array[2 * i + 1])
			{
				swap(Array[i], Array[2 * i + 1]);
				chart->Series["value"]->Points->Clear();
				chart->Series["changed"]->Points->Clear();
				for (int l = 0; l < realSize; l++) {
					if (l == i || l == 2 * i + 1) {
						chart->Series["changed"]->Points->AddXY(l + 1, Array[l]);
						continue;
					}
					chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
				}
				chart->Update();
				Sleep(speed);
				i = 2 * i + 1;
				continue;
			}
			if (Array[2 * i + 1] <= Array[2 * i + 2] && Array[i] < Array[2 * i + 2])
			{
				swap(Array[i], Array[2 * i + 2]);
				chart->Series["value"]->Points->Clear();
				chart->Series["changed"]->Points->Clear();
				for (int l = 0; l < realSize; l++) {
					if (l == i || l == 2 * i + 2) {
						chart->Series["changed"]->Points->AddXY(l + 1, Array[l]);
						continue;
					}
					chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
				}
				chart->Update();
				Sleep(speed);
				i = 2 * i + 2;
				continue;
			}
		}
		break;
	}
}

void heapSort(double* Array, int Size, System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed)
{
	int realSize = Size;
	int k = Size / 2 - 1, i = Size;
	while (k != -1)
	{
		down(Array, Size, k, chart, speed, realSize);
		k--;
	}
	Size--;
	while (Size != 0)
	{
		swap(Array[0], Array[Size]);
		chart->Series["value"]->Points->Clear();
		chart->Series["changed"]->Points->Clear();
		for (int l = 0; l < realSize; l++) {
			if (l == 0 || l == Size) {
				chart->Series["changed"]->Points->AddXY(l + 1, Array[l]);
				continue;
			}
			chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
		}
		chart->Update();
		Sleep(speed);
		down(Array, Size, 0, chart, speed, realSize);
		Size--;
	}
}