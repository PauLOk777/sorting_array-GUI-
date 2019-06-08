#ifndef COURSEWORKWF_SORTMETHODS_H
#define COURSEWORKWF_SORTMETHODS_H

void selectionSort(double*, int, System::Windows::Forms::DataVisualization::Charting::Chart^, int);
void shellSort(double*, int, System::Windows::Forms::DataVisualization::Charting::Chart^, int);
void down(double*, int, int, System::Windows::Forms::DataVisualization::Charting::Chart^, int, int);
void heapSort(double*, int, System::Windows::Forms::DataVisualization::Charting::Chart^, int);

#endif