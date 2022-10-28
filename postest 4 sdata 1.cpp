#include <iostream>  
using namespace std; 

struct data{
  	int nik, rt;
	string nama, ttl, alamat, desa;
    string kec, kwg, jk, status, pekerjaan, agama;
  	data *next, *prev;
  };
  data *awal=NULL,*akhir=NULL,*bantu,*baru,*hapus, *tambah;
  
class Postest {
public:


  void input();
  void output();
  void hapusdata();
  void tambahdata();
  int jml;
};


void Postest::input() {
  
  cout<<"Masukan banyak data : ";
  cin>>jml;  
  for (int i=0; i<jml; i++) {
  	baru = new data;
	baru->next = NULL;
    baru->prev = NULL;
    cout << "Data ke-" << i+1 << endl;
    cin.ignore();
    cout << "Masukkan NIK\t\t: ";
    cin >> baru->nik;
    cout << "Masukkan nama\t\t: ";
    cin >> baru->nama;
    //cin >> getline(cin, baru->nama);
    cout << "Masukkan TTL\t\t: ";
    //cin >> getline(cin, baru->ttl);
    cin >> baru->ttl;
    cout << "Masukkan jenis kelamin  : ";
    //cin >> cin >> getline(cin, baru->jk);
    cin >> baru->jk;
    cout << "Masukkan alamat \t: ";
    //cin >> getline(cin, baru->alamat);
    cin >> baru->alamat;
    cout << "Desa \t\t\t: ";
    cin >> baru->desa;
    cout << "Rt   \t\t\t: ";
    cin >> baru->rt;
    cout << "Kecematan \t\t:";
    cin >> baru->kec;
    cout << "Agama \t\t\t: ";
    cin >> baru ->agama;
    cout << "Masukkan pekerjaan\t: ";
    cin >> baru -> pekerjaan;
    
    cout << endl;
    if (awal == NULL){
	        awal = akhir = baru;
	}
    else {
	        baru->next = awal;
	        awal->prev = baru;
	        awal = baru;
    }
  } 
}

void Postest::output() {
	bantu=awal;
	
    while (bantu!=NULL) {
    cout << endl;
    cout << "Nik  \t\t: " << bantu->nik << endl;
    cout << "Nama \t\t: " << bantu->nama << endl;
    cout << "Tempat tgl lahir: " << bantu->ttl << endl;
    cout << "Jenis kelamin   : " << bantu->jk << endl;
    cout << "Alamat\t\t: " << bantu->alamat << endl;
    cout << "Desa   \t\t: " << bantu->desa << endl;
    cout << "Rt\t \t: " << bantu->rt << endl;
    cout << "Kecematan \t: " << bantu->kec << endl;
    cout << "Agama\t\t: " << bantu->agama << endl;
    cout << "Pekerjaan\t: " << bantu->pekerjaan << endl;
    bantu = bantu->next;  
    
    
  };
}

void Postest::tambahdata(){
	//dtambah = new data();
	tambah = new data;
	tambah->next = NULL;
    tambah->prev = NULL;
	cout << "Masukkan NIK\t\t: ";
    cin >> tambah->nik;
    cout << "Masukkan nama\t\t: ";
    cin >> tambah->nama;
    cout << "Masukkan TTL\t\t: ";
    cin >> tambah->ttl;
    cout << "Masukkan jenis kelamin  : ";
    cin >> tambah->jk;
    cout << "Masukkan alamat \t: ";
    cin >> tambah->alamat;
    cout << "Desa \t\t\t: ";
    cin >> tambah->desa;
    cout << "Rt   \t\t\t: ";
    cin >> tambah->rt;
    cout << "Kecematan \t\t:";
    cin >> tambah->kec;
    cout << "Agama \t\t\t: ";
    cin >> tambah ->agama;
    cout << "Masukkan pekerjaan\t: ";
    cin >> tambah-> pekerjaan;

    tambah->next = awal;
    awal->prev = tambah;
    awal = tambah;
}

void Postest::hapusdata(){
    if(awal->next == NULL){
        awal=akhir=NULL;
        cout << "Data sudah kosong";
    }else{
        hapus = akhir;
        akhir = akhir->prev;
        akhir->next = NULL;
        delete hapus;
    }
}

int main() {
	Postest x;
  int pilih;

  do{

	cout << endl;
  	cout << "Pilih menu : \n";
  	cout << "1. Input data \n";
  	cout << "2. Hapus data \n";
  	cout << "3. Tambah data \n";
  	cout << "4. Output data\n";

  	
  	cout << "Lain-lain >> EXIT\n";
  	cout << endl;
  	cout << "Pilih   : ";
  	cin>>pilih;

  switch(pilih){
    case 1:
      //system("cls");
      x.input();
      break;
      case 2:
      //system("cls");
      x.hapusdata();
      break;
      
      case 3:
      //system("cls");
      x.tambahdata();
      break;
      
      case 4:
      //system("cls");
      x.output();
      break;
      
      default :
      //system("cls");
      cout << "---------EXIT---------";
      exit(1);
      break;
  }
  
}
  while(pilih<=3);
}
