#include <iostream>
#include <string>
#include<windows.h>
#include <fstream>


using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	//fout.open("file.txt");
	//	fout << 5; // вывод текста в файл
	//	fout.close();
	ifstream fin("file.txt");
	string b, d;
	fin >> b; //чтение букв до пробела
	fin >> d; //чтение букв до пробела
	string a;
	getline(fin, a); // чтение целой строки
	fin >> a;
	cout << a;
}