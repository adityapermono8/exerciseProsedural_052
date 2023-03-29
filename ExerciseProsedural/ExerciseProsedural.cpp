#include <iostream>
using namespace std;

double rataRata(double a, double b) {
	return (a + b) / 2;
}
string nama[20];
double nilai_matematika[20];
double nilai_bahasa_inggris[20];
int diterima = 0;
int ditolak = 0;

void input() {
	cout << "=========================" << endl;
	cout << "Masukkan Nilai Kandidat" << endl;
	cout << "=========================" << endl;

	for (int i = 0; i < 20; i++) {
		cout << "Masukkan Nama Kandidat" << nama[i] << " : ";
		cin >> nama[i];

		cout << "Masukan Nilai Matematika" << " : ";
		cin >> nilai_matematika[i];

		cout << "Masukan Nilai Bahasa Inggris" << " : ";
		cin >> nilai_bahasa_inggris[i];
	}

	cout << "\n==================" << endl;
	cout << "Nama    Status" << endl;
	cout << "===================" << endl;
}

void proses() {
	for (int i = 0; i < 20; i++) {
		if (rataRata(nilai_bahasa_inggris[i], nilai_matematika[i]) >= 70 || nilai_matematika[i] > 80) {
			cout << nama[i] << " Diterima" << endl;
			diterima++;
		}
		else {
			cout << nama[i] << " Ditolak" << endl;
			ditolak++;
		}
	}
}
void tampilkanStatus() {
	cout << "\n---------------------------------" << endl; 
	cout << "Total kandidat yang diterima : " << diterima << endl;
	cout << "Total kandidat yang tidak diterima : " << ditolak << endl; 
	cout << "---------------------------------" << endl; 
}
int main() {
	input();
	proses();
	tampilkanStatus();
}