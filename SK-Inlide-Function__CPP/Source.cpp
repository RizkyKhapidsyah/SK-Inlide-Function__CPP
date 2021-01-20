#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

inline static void cplusplus() {
	cout << "Pemrogramman C++\n";
	cout << "C++ Programming, ";
}
int main() {
	{
		cout << "Kami Sedang Belajar, ";
		cplusplus();
		cout << "Sedang Kami Pelajari.\n\n";
	}

	{
		cout << "Mari Belajar, ";
		cplusplus();
		cout << "Mudah Untuk Dipelajari.\n\n";
	}

	{
		cout << "Jika Sudah Mengerti, ";
		cplusplus();
		cout << "Berarti Sudah Anda Kuasai";
	}
	
	_getch();
	return 0;
}