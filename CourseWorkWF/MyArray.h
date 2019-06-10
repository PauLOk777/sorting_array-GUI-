#ifndef COURSEWORKWF_MYARRAY_
#define COURSEWORKWF_MYARRAY_

#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

ref class MyArray {
private:
	double* Array;
	int size;
	int realSize;
	void down(int size, int i, System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed, int realSize);
public:
	MyArray();
	MyArray(int size);
	~MyArray();
	void clear();
	int getSize() { return size; }
	void setSize(int size) { this->size = size; }
	double* getArray() { return Array; }
	void resize();
	void add(double element);
	void selectionSort(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed);
	void shellSort(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed);
	void heapSort(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int speed);
	double operator[](int num) { return Array[num]; }
	void randomFillingArray(int begin, int end);
};

#endif