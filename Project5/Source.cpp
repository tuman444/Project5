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
	//	fout << 5; // ����� ������ � ����
	//	fout.close();
	ifstream fin("file.txt");
	string b, d;
	fin >> b; //������ ���� �� �������
	fin >> d; //������ ���� �� �������
	string a;
	getline(fin, a); // ������ ����� ������
	fin >> a;
	cout << a;
}