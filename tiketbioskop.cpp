#include <iostream>
#include <conio.h>
using namespace std;

//TIKET BIOSKOP

//fungsi pilihan untuk menampilkan judul film
void pilihan(){
	system("color 6");
	string judul[5] = {"Melankolia", "  End Game", "Geez & Ann", "  Mariposa", " Your Name"};
	cout << "Berikut film yang sedang tayang :" << endl;
	cout <<"----------------------------------------------"<<endl;
	cout << "0. " << judul[0] << endl;
	cout << "1. " << judul[1] << endl;
	cout << "2. " << judul[2] << endl;
	cout << "3. " << judul[3] << endl;
	cout << "4. " << judul[4] << endl;
	cout <<"----------------------------------------------"<<endl;
	cout <<"Silahkan pilih film yang ingin Anda tonton : ";
}

//fungsi timer sebagai delay waktu
void timer(){
	int waktu;
	for (waktu = 0; waktu <= 15; waktu++){
		cout << "loading";
		system("cls");
	}
}
int main(){
	int film, tiket, jam, total1, total2, day, uang, kembalian, i;
	string nama;
	int weekday = 35000;
	int weekend = 45000;
	string hari [7] = {"1. Senin", "2. Selasa", "3. Rabu", "4. Kamis", "5. Jumat", "6. Sabtu", "7. Minggu"};
	string waktu [4] = {"10.00", "13.20", "16.00", "18.20"};
	string waktos [6] = {"09.00", "11.00", "13.20", "16.00", "18.20", "20.30"};
	string studio [5] = {"Studio 1", "Studio 2", "Studio 3", "Studio 4", "Studio 5"};
	string judul [5] = {"Melankolia", "  End Game", "Geez & Ann", "  Mariposa", " Your Name"};
	
	system("color B");
	cout << "---------------------------------------" << endl;
	cout << "=======================================" << endl;
	cout << "||   Selamat Datang di Bioskop XXI   ||" << endl;
	cout << "=======================================" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	system("color B");
	cout<< "Berikut Peraturan di dalam Bioskop : "<<endl;
	cout << "------------------------------------------------------" << endl;
	cout<< "1. Dilarang berisik selama film diputar"<<endl;
	cout<< "2. Dilarang merokok di dalam bioskop"<<endl;
	cout<< "3. Dimohon menjaga kebersihan di dalam bioskop"<<endl;
	cout<< "4. Silahkan nyalakan fitur silent pada Handphone Anda"<<endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Masukkan Nama Pemesan : ";
	cin >> nama;
	system("cls");
	pilihan();
	cin >> film;
	system("cls");
	
	//MENENTUKAN FILM
	if (film < 0 || film > 4) {
		system("color C");
		cout << "Film tidak ditemukan" << endl;
		cout << "Tekan apa saja untuk kembali ke Menu...";
		getch();
		system("cls");
		main();
	}
	//MENENTUKAN HARI
	else {
		system("cls");
		for (i = 0; i < 7; i++){
			system("color E");
			cout << hari[i] << endl;
		}
		cout<< "------------------------------------" <<endl;
		cout << "Silahkan pilih Hari untuk nonton : ";
		cin >> day;
		system("cls");
		// WEEKDAY
		if (day > 0 && day <= 5){
			cout << "0) 10.00 \n1) 13.20 \n2) 16.00 \n3) 18.20 \n";
			cout << "----------------------"<<endl;
			cout << "Pilih jam nonton : ";
			cin >> jam;
			system("cls");
			if (jam >= 0 && jam < 4) {
				cout << "Harga tiket = Rp.35000" << endl;
				cout << "Masukkan jumlah tiket yang ingin dibeli : ";
				cin >> tiket;
				system("cls");
				total1 = tiket * weekday;
				cout << "Total Harga  	   : Rp." << total1 << endl;
				cout << "Masukkan uang Anda : Rp.";
				cin >> uang;
				if (uang >= total1){
					kembalian = uang - total1;
				    cout << "-----------------------------------" <<endl;
					cout << "Kembalian Anda     : Rp." << kembalian << endl;
					cout << endl;
					cout << "Terima Kasih, Selamat Menonton ^^" << endl;
					cout << "-----------------------------------" <<endl;
					cout << endl;
					cout << "Tekan apa saja untuk melihat tiket Anda...";
					getch();
					timer();
					for (i = 0; i < tiket; i++) {	
					    cout << "+-----Bioskop XXI-----+" << endl;
						cout << "|     " << judul[film] << "      |"<< endl;
						cout << "|      " << waktu[jam] << " WIB      |" << endl;
						cout << "|      " << studio[film] << "       |" << endl;	
						cout << "+---------------------+" << endl;
					}
				}
				else {
					system("cls");
					system("color C");
					cout << "Maaf, Uang Anda tidak mencukupi" << endl;
					cout << "Tekan apa saja untuk lanjut...";
					getch();
					system("cls");
					main();
				}
			}
			else {
				system("color C");
				cout << "Jam tidak ditemukan" << endl;
				cout << "Tekan apa saja untuk kembali ke Menu..." << endl;
				getch();
				system("cls");
				main();
			}
		}
		//WEEKEND
		else if (day >= 5 && day <= 7){
			cout << "0) 09.00 \n1) 11.00 \n2) 13.20 \n3) 16.00 \n4) 18.20 \n5) 20.30 \n";
			cout << "----------------------"<<endl;
			cout << "Pilih jam nonton : ";
			cin >> jam;
			system("cls");
			if (jam >= 0 && jam < 6) {
				cout << "Harga tiket = Rp.45000" << endl;
				cout << "Masukkan jumlah tiket yang ingin dibeli : ";
				cin >> tiket;
				system("cls");
				total2 = tiket * weekend;
				cout << "Total Harga  	   : Rp." << total2 << endl;
				cout << "Masukkan uang Anda : Rp.";
				cin >> uang;
				if (uang >= total2){
					kembalian = uang - total2;
				    cout <<"-----------------------------------"<<endl;
					cout << "Kembalian Anda     : Rp." << kembalian << endl;
					cout << endl;
					cout << "Terima Kasih, Selamat Menonton ^^" << endl;
					cout <<"-----------------------------------"<<endl;
					cout << endl;
					cout << "Tekan apa saja untuk melihat tiket Anda...";
					getch();
					timer();
					for (i = 0; i < tiket; i++) {	
					    cout << "+-----Bioskop XXI-----+" << endl;
						cout << "|     " << judul[film] << "      |"<< endl;
						cout << "|      " << waktos[jam] << " WIB      |" << endl;
						cout << "|      " << studio[film] << "       |" << endl;	
						cout << "+---------------------+" << endl;
					}
				}
				else {
					system("cls");
					system("color C");
					cout << "Maaf, Uang Anda tidak mencukupi" << endl;
					cout << "Tekan apa saja untuk lanjut...";
					getch();
					system("cls");
					main();
				}
			}
			else {
				system("color C");
				cout << "Jam tidak ditemukan" << endl;
				cout << "Tekan apa saja untuk kembali ke Menu..." << endl;
				getch();
				system("cls");
				main();
			}
		}		
		else {
			system("color C");
			cout << "Hari tidak ditemukan" << endl;
			cout << "Tekan apa saja untuk lanjut...";
			getch();
			system("cls");
			main();
		}
	}
}
