// bubble_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];							// Deklarasi array a dengan ukuran 20
int n;								// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {						// procedur unutk input
	while (true) {				// looping
		cout << "Masukan banyaknya elemen pada array : ";	// Output ke layar
		cin >> n;				// Input dari pengguna
		if (n <= 20)			// Jika n kurang dari atau sama dengan 20
			break;				// Keluar dari loop
		else (					// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
	}
}
cout << endl;								// Output baris kosong
cout << "===================" << edl;		// Output ke layar
cout << "Masukan Elemen Array" << endl;		// Output ke layar
cout << "===================" << endl;		// Output ke layar

for (int i = 0; i < n; i++) {	// Looping dengan i dimulai dari 0 hingga n-1
	cout << "Data ke-" << (i + 1) << ": ";	// Output ke layar
	cin >> a[i];					// Input dari pengguna
}
}
void bubbleSortArray() {	// procedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {		// Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - 1; j++) {	// Looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {			// Jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];			// Simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1]i;			// Assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;			// Assign nilai temp ke a[j+1]
			}
		}
	}
}

void unsorted() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Elemen Array yang telah disusun" << endl;
	cout << "============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Elemen Array yang belum disusun" << endl;
	cout << "============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

int main() {
	input();
	unsorted();
	bubblesortArray();
	display();

	return 0;
}
int main()
{
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
