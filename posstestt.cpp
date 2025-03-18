#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class KEDAI {
    friend ostream& operator<<(ostream&, const KEDAI&);  // operator overload untuk output
    friend istream& operator>>(istream&, KEDAI&);        // operator overload untuk input

private:
    double hargaAG, hargaAB;
    double total, totalAG, totalAB;
    float diskon;
    string ayamG, ayamB;

public:
    KEDAI();  // Deklarasi Konstruktor
    void display_struk();  // Deklarasi Fungsi untuk menampilkan struk pembayaran
    void set_harga();  // Deklarasi Fungsi untuk set harga dan diskon
    void proses_pembelian();  // Deklarasi Fungsi untuk proses pembelian menu
};

// Konstruktor untuk inisialisasi harga dan diskon
KEDAI::KEDAI() {
    set_harga();
    total = 0;
    totalAG = 0;
    totalAB = 0;
}

// Menetapkan harga dan diskon
void KEDAI::set_harga() {
    hargaAG = 17000;  // Harga Ayam Goreng
    hargaAB = 21000;  // Harga Ayam Bakar
    diskon = 0.90;    // Diskon 10% jika total pembelian > 45.000
    ayamG = "Ayam Goreng";
    ayamB = "Ayam Bakar";
}

// Proses Pembelian: Menampilkan menu dan menginput pilihan user
void KEDAI::proses_pembelian() {
    int pil, jumlah;
    do{
        cout<<"+============ INI KEDAI ============+"<<endl;
        cout<<left<<setw(11)<<"|"<<"Selamat Datang!"<<right<<setw(11)<<"|"<<endl;
        cout<<"| 1. Ayam Goreng.........Rp. 17.000 |"<<endl;
        cout<<"| 2. Ayam Bakar..........Rp. 21.000 |"<<endl;
        cout<<"| 0. Selesai                        |"<<endl;
        cout<<"+===================================+"<<endl;
        cout<<"Pilih Menu: "; 
        cin>>pil;

        if(pil >= 1 && pil <= 2) {
            cout<<"Jumlah: ";  
            cin>>jumlah;

            switch(pil) {
                case 1: totalAG += hargaAG * jumlah; break;
                case 2: totalAB += hargaAB * jumlah; break;
                default: break;
            }
            cout<<"Menu Berhasil Ditambahkan!"<<endl;
        } 
        else if(pil == 0) {
            cout<<"Pembelian Anda Berhasil!"<<endl;
        } 
        else { 
            cerr<<"Input Tidak Valid!"<<endl; 
        }

        system("pause");
        system("cls");
    } while (pil != 0);
}

// Operator overload untuk input (>>)
istream& operator>>(istream& in, KEDAI& kedai) {
    kedai.proses_pembelian();  // Panggil fungsi proses_pembelian
    return in;
}


// Menampilkan struk pembayaran
void KEDAI::display_struk() {
    total = totalAG + totalAB;

    cout<<"+===================== STRUK PEMBAYARAN ====================+" << endl;
    cout<<left<<setw(30)<<"Menu"<<setw(10)<<"Harga"<<setw(10)<<"Jumlah"<<"Total"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    
    if(totalAG > 0) {
        cout<<left<<setw(30)<<ayamG<<setw(12)<<hargaAG<<setw(8)<<(totalAG / hargaAG)<<totalAG<<endl;
    }
    if(totalAB > 0) {
        cout<<left<<setw(30)<<ayamB<<setw(12)<<hargaAB<<setw(8)<<(totalAB / hargaAB)<<totalAB<<endl;
    }
    
    if(total > 45000) {
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<left<<setw(23)<<"Total Pembelian"<<": Rp. "<<total<<endl;
        cout<<left<<setw(23)<<"Diskon 10%      "<<": Rp. "<<total * (1 - diskon)<< endl;
        cout<<left<<setw(23)<<"Total Setelah Diskon "<<": Rp. "<<total * diskon<< endl;
    } else {
        cout<<"------------------------------------------------------------"<< endl;
        cout<<"Total Pembelian : Rp. "<<total<<endl;
    }
    cout<<"+===========================================================+"<<endl;
}

int main() {
    KEDAI kedai; 
    cin>>kedai;  // Input untuk pembelian menu

    // Tampilkan struk pembayaran
    kedai.display_struk();

    return 0;
}

