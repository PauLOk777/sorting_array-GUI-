#ifndef COURSEWORKWF_FILEWORK_H
#define COURSEWORKWF_FILEWORK_H

#include <fstream>

using namespace std;

istream& fileFillingArray(ifstream&, double*, int);
istream& openFileINPUT(ifstream&, string);
istream& readSize(ifstream&, int&);
ostream& openFileOUTPUT(ofstream&, string);
void writeFile(double* Array, int size);

#endif
