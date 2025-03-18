#include <iostream> // sebagai header
#include <iomanip>
#include <string>
using namespace std;

struct KTP { 	//sebagai fungsi pembuatan sebagai variabel KTP dengan isi seperti string nama DLL
	string nik; //memberikan variabel nik pada tipe data string
	string nama;
	string tempat_tgl_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};

void inputKTP(KTP &ktp) {	//sebagai fungsi ber variabel KTP untuk mengisi sebuah data
	cout << "Masukkan NIK: ";
	getline(cin, ktp.nik);	//untuk bisa menginput serta digunakan untuk menginput  data variabel
	cout << "Masukkan Nama: ";
	getline(cin, ktp.nama);
	cout << "Masukkan Tempat Tanggal Lahir: ";
	getline(cin, ktp.tempat_tgl_lahir);
	cout << "Masukkan Jenis Kelamin: ";
	getline(cin, ktp.jenis_kelamin);
	cout << "Masukkan Golongan Darah: ";
	getline(cin, ktp.gol_darah);
	cout << "Masukkan Alamat: ";
	getline(cin, ktp.alamat);
	cout << "Masukkan RT/RW: ";
	getline(cin, ktp.rt_rw);
	cout << "Masukkan Kelurahan/Desa: ";
	getline(cin, ktp.kel_desa);
	cout << "Masukkan Kecamatan: ";
	getline(cin, ktp.kecamatan);
	cout << "Masukkan Agama: ";
	getline(cin, ktp.agama);
	cout << "Masukkan Status Perkawinan: ";
	getline(cin, ktp.status_perkawinan);
	cout << "Masukkan Pekerjaan: ";
	getline(cin, ktp.pekerjaan);
	cout << "Masukkan Kewarganegaraan: ";
	getline(cin, ktp.kewarganegaraan);
	cout << "Masukkan Berlaku Hingga: ";
	getline(cin, ktp.berlaku_hingga);
}

void displayKTP(const KTP &ktp) {	//mendeklarasikan fungsi displayKTP
	cout << "\n========== SIMULASI KTP========\n"; // menampilkan header untuk memulai output data ktp
	cout << left << setw(20) << "NIK" << ": " << ktp.nik << endl; //untuk menampilkan label NIK
	cout << left << setw(20) << "Nama" << ": " << ktp.nama << endl;
	cout << left << setw(20) << "Tempat Tanggal Lahir" << ": " << ktp.tempat_tgl_lahir << endl;
	cout << left << setw(20) << "Jenis Kelamin" << ": " << ktp.jenis_kelamin << endl;
	cout << left << setw(20) << "Golongan Darah" << ": " << ktp.gol_darah << endl;
	cout << left << setw(20) << "Alamat" << ": " << ktp.alamat << endl;
	cout << left << setw(20) << "RT/RW" << ": " << ktp.rt_rw << endl;
	cout << left << setw(20) << "Kelurahan/Desa" << ": " << ktp.kel_desa << endl;
	cout << left << setw(20) << "Kecamatan" << ": " << ktp.kecamatan << endl;
	cout << left << setw(20) << "Agama" << ": " << ktp.agama << endl;
	cout << left << setw(20) << "Status Perkawinan" << ": " << ktp.status_perkawinan << endl;
	cout << left << setw(20) << "Pekerjaan" << ": " << ktp.pekerjaan << endl;
	cout << left << setw(20) << "Kewarganegaraan" << ": " << ktp.kewarganegaraan << endl;
	cout << left << setw(20) << "Berlaku Hingga" << ": " << ktp.berlaku_hingga << endl;
	cout << "========================================\n";
}

int main () {
	KTP ktp; //untuk variable ktp bertipe data KTP untuk menyimpan data KTP
	
	cout << "Input Data KTP\n";
	inputKTP(ktp); // pemanggil fungsi inputktp
	
	displayKTP(ktp); // pemanggil fungsi displayktp

	return 0; //program telah selesai
}
