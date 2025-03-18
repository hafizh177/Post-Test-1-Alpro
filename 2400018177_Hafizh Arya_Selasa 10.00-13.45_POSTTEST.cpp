#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){
	string nama_pelanggan, jenis_bensin;	
	double jumlah_liter, total_harga;
	const double harga_pertalite = 7000;
	const double harga_pertamax = 9000;
	
	cout << "Masukkan Nama Pelanggan: ";
	getline(cin, nama_pelanggan);
	
	cout << "Masukkan Jenis Bensin (pertalite/pertamax): ";
	cin >> jenis_bensin;
	
	cout << "Masukkan Jumlah Liter: ";
	cin >> jumlah_liter;
	
	if (jenis_bensin == "pertalite"){
		total_harga = harga_pertamax * jumlah_liter;
	} else if (jenis_bensin == "pertamax") {
		total_harga = harga_pertamax * jumlah_liter;
	} else {
		cout << "Jenis Bensin Tidak Valid!!" << endl;
		return 1; 
	}
	
	cout<<"\n\n============= STRUK PEMBELIAN =============\n";
	cout<<"Nama Pelanggan\t: " << nama_pelanggan  << endl;
	cout<<"Jenis Bensin\t: "  << jenis_bensin << endl;
	cout<<"Jumlah Liter\t: " << fixed << setprecision(2) << jumlah_liter << "Liter" << endl;
	cout<<"Total Harga\t: Rp" << fixed << setprecision(2) << total_harga << endl;
	cout<<"===========================================";
	
	return 0;
}
