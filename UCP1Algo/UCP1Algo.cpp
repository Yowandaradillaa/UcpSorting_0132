// 1. Cara membandingkan dan menukar elemen-elemen pada insertion sort adalah dengan membagi 2 bagian index/array terlebih dahulu antara yang belum tersusun dan yang sudah tersusun lalu diurutkan dari yang terkecil ke terbesar dimulai dari kanan ke kiri 
// 2. Cara membandingkan dan menukar elemen-elemen pada buble sort adalah dengan  melakukan scanning data secara berulang, bandingkan lalu jika ada urutan data yang salah ditukar denngan yang sudah benar
// 3. Untuk mengetahui jumlah langkah yaitu dengan rumus n-1 yaiu dengan jumlah index dikurangi dengan 1 
// 4.
#include <iostream>
using namespace std;

int wanda[32];
int n;

void input() {
	while (true) {
		cout << "Masukan banyak elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 32 elemen.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> wanda[i];
	}
}

void selectionSort(){
	int i, min_index, j, n;

	for (j = 0; j <= n - 2; j++) {
		(wanda[j] < wanda[min_index]){
		min_index = wanda[j];
		while (i = j + 1 <= n - 1){
			(wanda[i] < wanda[min_index]);
			min_index = 1;
		}
		wanda[j], & wanda[min_index];
		}
	}

	void display(){
		cout << endl;
		cout << "===================" << endl;
		cout << "Element Array yang telah tersusun" << endl;
		cout << "===================" << endl;
		for (int j = 0; j < n; j++) {
			cout << wanda[j] << endl;
		}
		cout << "Jumlah pass = " << n - 1 << endl;
		cout << endl;
	}

	int main(){
		input();
		selectionSort();
		display();
		system("pause");


		return 0;

	}

