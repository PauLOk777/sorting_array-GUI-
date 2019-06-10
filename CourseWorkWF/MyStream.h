#ifndef COURSEWORKWF_MYSTREAM_
#define COURSEWORKWF_MYSTREAM_

#include "MyArray.h"
#include <fstream>
#include <string>

class MyStream {
private:
	ifstream fin;
	ofstream fout;
public:
	void openFileOUTPUT();
	bool openFileINPUT(string name);
	void fileFillingArray(double* Array);
	void writeFile(double* Array, int size);
	void readSize(int& size);
};

#endif