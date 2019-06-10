#include "MyArray.h"

void MyArray::down(int Size, int i, System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed, int realSize)
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

MyArray::MyArray()
{
	size = 0;
	realSize = 1;
	Array = new double[realSize];
}

MyArray::MyArray(int size)
{
	this->size = size;
	Array = new double[size];
}

MyArray::~MyArray()
{
	if (Array != nullptr) delete[] Array;
}

void MyArray::clear()
{
	if (Array != nullptr) delete[] Array;
	size = 0;
	realSize = 1;
	Array = new double[realSize];
}

void MyArray::resize()
{
	double* newArray = new double[size * 2];
	realSize *= 2;
	for (int i = 0; i < size; i++) {
		newArray[i] = Array[i];
	}
	delete[] Array;
	Array = newArray;
}

void MyArray::add(double element)
{
	if (size == realSize) {
		resize();
	}
	size++;
	Array[size - 1] = element;
}

void MyArray::selectionSort(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed)
{
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

void MyArray::shellSort(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed)
{
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

void MyArray::heapSort(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed)
{
	int tempSize = size;
	int k = tempSize / 2 - 1, i = tempSize;
	while (k != -1)
	{
		down(tempSize, k, chart, speed, size);
		k--;
	}
	tempSize--;
	while (tempSize != 0)
	{
		swap(Array[0], Array[tempSize]);
		chart->Series["value"]->Points->Clear();
		chart->Series["changed"]->Points->Clear();
		for (int l = 0; l < size; l++) {
			if (l == 0 || l == tempSize) {
				chart->Series["changed"]->Points->AddXY(l + 1, Array[l]);
				continue;
			}
			chart->Series["value"]->Points->AddXY(l + 1, Array[l]);
		}
		chart->Update();
		Sleep(speed);
		down(tempSize, 0, chart, speed, size);
		tempSize--;
	}
}

void MyArray::randomFillingArray(int begin, int end)
{
	if (realSize < size) {
		double* newArray = new double[size];
		delete[] Array;
		Array = newArray;
	}
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		Array[i] = rand() % (end - begin + 1) + begin;
	}
}
