#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct KTP{
	string nik;
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

void inputKTP(KTP &ktp) {
	cout<<"Masukkan NIK: ";	getline(cin, ktp.nik);
	cout<<"Masukkan Nama: ";	getline(cin, ktp.nama);
	cout<<"Masukkan Tempat/Tgl Lahir: ";	getline(cin, ktp.tempat_tgl_lahir);
	cout<<"Masukkan Jenis Kelamin: ";	getline(cin, ktp.jenis_kelamin);
	cout<<"Masukkan Gol_darah: ";	getline(cin, ktp.gol_darah);
	cout<<"Masukkan Alamat: ";	getline(cin, ktp.alamat);
	cout<<"Masukkan RT/RW: ";	getline(cin, ktp.rt_rw);
	cout<<"Masukkan Kel/Desa: ";	getline(cin, ktp.kel_desa);
	cout<<"Masukkan Kecamatan: ";	getline(cin, ktp.kecamatan);
	cout<<"Masukkan Agama: ";	getline(cin, ktp.agama);
	cout<<"Masukkan Status Perkawinan: ";	getline(cin, ktp.status_perkawinan);
	cout<<"Masukkan Pekerjaan: ";	getline(cin, ktp.pekerjaan);
	cout<<"Masukkan Kewarganegaraan: ";	getline(cin, ktp.kewarganegaraan);
	cout<<"Masukkan Berlaku Hingga: ";	getline(cin, ktp.berlaku_hingga);
}

void displayKTP(const KTP &ktp) {
	//left adalah aligment dan setw adalah berapa banyak spasi yang diberikan
	cout<<"\n=================== SIMULASI KTP ===================\n";
	cout<<left<<setw(20)<<"NIK "<<": "<<ktp.nik<<endl;
	cout<<left<<setw(20)<<"Nama "<<": "<<ktp.nama<<endl;
	cout<<left<<setw(20)<<"Tempat/Tgl Lahir "<<": "<<ktp.tempat_tgl_lahir<<endl;
	cout<<left<<setw(20)<<"Jenis Kelamin "<<": "<<ktp.jenis_kelamin<<endl;
	cout<<left<<setw(20)<<"Gol_darah "<<": "<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<"Alamat "<<": "<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<"RT/RW "<<": "<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<"Kel/Desa "<<": "<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<"Kecamatan "<<": "<<ktp.kecamatan<<endl;
	cout<<left<<setw(20)<<"Agama "<<": "<<ktp.agama<<endl;
	cout<<left<<setw(20)<<"Status Perkawinan "<<": "<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<"Pekerjaan "<<": "<<ktp.pekerjaan<<endl;
	cout<<"===================================================\n";		
}

int main() {
	KTP ktp;
	
	cout<<"Input Data KTP\n";
	
	inputKTP(ktp);
	displayKTP(ktp);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
