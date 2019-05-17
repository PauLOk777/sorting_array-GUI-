#include "FileWork.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

istream& openFileINPUT(ifstream& fin, string name) {
	fin.open(name);
	if (!fin.is_open()) {
		cout << "Error, we dont find this file.";
		system("pause");
		exit(1);
	}
	cout << "Input file is opened." << endl;
	return fin;
}

istream& readSize(ifstream& fin, int& size) {
	int counter = 0;
	string buff = "";
	getline(fin, buff);
	for (int i = 0; i < buff.length(); i++) {
		if (buff[i] == ',') {
			counter++;
		}
	}
	size = counter + 1;
	return fin;
}

ostream& openFileOUTPUT(ofstream& fout, string name) {
	fout.open(name);
	if (!fout.is_open()) {
		cout << "Error." << endl;
		system("pause");
		exit(1);
	}
	cout << "File was opened (created)." << endl;
	return fout;
}

void writeFile(double* Array, int size) {
		ofstream fout;
		string name = "output.txt", buff = "";
		openFileOUTPUT(fout, name);
		for (int i = 0; i < size - 1; i++) {
			buff += to_string(Array[i]) + ',';
		}
		buff += to_string(Array[size - 1]);
		fout << buff;
		fout.close();
}

istream& fileFillingArray(ifstream& fin, double* Array, int size) {
	string buff = "", temp = "";
	int index = 0;
	getline(fin, buff);
	for (int i = 0; i < buff.length(); i++) {
		if (buff[i] != ',') {
			temp += buff[i];
		}
		else {
			Array[index] = stod(temp);
			index++;
			temp = "";
		}
	}
	Array[index] = stod(temp);
	return fin;
}