#include "MyStream.h"

bool MyStream::openFileINPUT(string name)
{
	fin.open(name);
	if (!fin.is_open()) {
		return false;
	}
	return true;
}

void MyStream::fileFillingArray(double* Array)
{
	fin.seekg(0);
	string buff = "", temp = "";
	int index = 0;
	getline(fin, buff);
	for (int i = 0; i < buff.length(); i++) {
		if (buff[i] != ',' || buff[i] == ' ') {
			temp += buff[i];
		}
		else {
			Array[index] = stod(temp);
			index++;
			temp = "";
		}
	}
	Array[index] = stod(temp);
	fin.close();
}

void MyStream::writeFile(double* Array, int size)
{
	openFileOUTPUT();
	string buff = "";
	for (int i = 0; i < size - 1; i++) {
		buff += to_string(Array[i]) + ',';
	}
	buff += to_string(Array[size - 1]);
	fout << buff;
	fout.close();
}

void MyStream::openFileOUTPUT()
{
	fout.open("output.txt");
	if (!fout.is_open()) {
		system("pause");
		exit(1);
	}
}

void MyStream::readSize(int& size) {
	int counter = 0;
	string buff = "";
	getline(fin, buff);
	for (int i = 0; i < buff.length(); i++) {
		if (isalpha(buff[i])) {
			size = 0;
			return;
		}
		if (buff[i] == ',' || buff[i] == ' ') {
			counter++;
		}
	}
	size = counter + 1;
}