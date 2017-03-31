#include <iostream>
using namespace std;

// deklarasi fungsi
bool iswithinRange(float nilai, int max, int min);
void prosescetak();

//deklarasi variable
float nilai_ip, total_ip;
bool valid;
int jml_mahasiswa, jml_lulus, jml_tidak_lulus;

int main () {
    do {	
		cout << "Masukan Nilai IP :";
		cin >> nilai_ip;
		valid = iswithinRange(nilai_ip, 4, 0);
		if (valid){
			if (nilai_ip >= 2.75){
				jml_lulus++;
			} else {
				jml_tidak_lulus++;
			}
			total_ip = total_ip + nilai_ip;
			jml_mahasiswa++;
		} else {
			cout << "Tidak Ada Data" << endl;		
		}
	} 
	while (nilai_ip != -999 ) ;
	prosescetak();
}

bool iswithinRange(float nilai, int max, int min){
	if (nilai > 4 || nilai < 0 ){
		return false;
	} 
	return true;
}

void prosescetak(){
	cout << "Banyaknya Mahasiswa : " << jml_mahasiswa << endl;
	cout << "Banyaknya Mahasiswa Lulus : " << jml_lulus << endl;
	cout << "Banyaknya Mahasiswa Tidak Lulus : " << jml_tidak_lulus << endl;
	cout << "Rata - rata nilai IP Kelas : " << (total_ip / jml_mahasiswa) << endl;
}