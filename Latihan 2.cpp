#include <iostream>
#include <string>

using namespace std;

int main()
{
	int belanja;
	int diskon;
	int total_harga;
	
	cout << "Selamat Hari Kesaktian Pancasila" << endl;
	cout << "Tuliskan jumlah pembelian anda: ";
	cin >>belanja;
	cout <<endl;
	diskon = belanja;
	if (diskon >= 1102019)
	{
		cout << "Apakah anda membawa KTP? (y) atau (n): ";
		string ktp;
		cin >> ktp;
		cout <<endl;
			if (ktp == "y")
			{
				cout << "Selamat anda mendapatkan diskon spesial Hari Kesaktian Pancasila"<< endl;
				cout << "KTP anda berasal dari Makassar? (iya) atau (tidak): ";
				string asal;
				cin >> asal;
				cout << endl;
					if (asal == "iya")
					{
						cout << "Silahkan pilih data dibawah ini"<< endl;
						cout << "1. Menikah dan memiliki anak\n2. Menikah tapi belum punya anak"<< endl;
						cout << "3. Tidak menikah dan memiliki kartu anggota\n4. Tidak menikah tapi tidak memiliki kartu anggota"<<endl;
						cout <<"Manakah status anda saat ini?: ";
						int status;
						cin >> status;
						cout <<endl;
						switch (status){
							case 1:
								cout <<"Selamat anda mendapatkan diskon 75%"<<endl;
								total_harga = belanja - (belanja * 0.75);
								break;
							case 2:
								cout <<"Selamat anda mendapatkan diskon 50%"<<endl;
								total_harga = belanja - (belanja * 0.5);
								break;
							case 3:
								cout <<"Selamat anda mendapatkan diskon 25%"<<endl;
								total_harga = belanja - (belanja * 0.25);
								break;
							case 4:
								cout <<"Selamat anda mendapatkan diskon 10%"<<endl;
								total_harga = belanja - (belanja * 0.1);
								break;
							}
					}
					else
					{
						cout << "Silahkan pilih data dibawah ini"<< endl;
						cout << "1. Menikah dan memiliki anak\n2. Menikah tapi belum punya anak"<< endl;
						cout << "3. Tidak menikah dan memiliki kartu anggota\n4. Tidak menikah tapi tidak memiliki kartu anggota"<<endl;
						cout <<"Manakah status anda saat ini?: ";
						int status;
						cin >> status;
						cout <<endl;
						switch (status){
							case 1:
								cout <<"Selamat anda mendapatkan diskon 75%+10%"<<endl;
								total_harga = belanja - (belanja * 0.75) - (belanja * 0.1);
								break;
							case 2:
								cout <<"Selamat anda mendapatkan diskon 50%+10%"<<endl;
								total_harga = belanja - (belanja * 0.5) - (belanja * 0.1);
								break;
							case 3:
								cout <<"Selamat anda mendapatkan diskon 25%+10%"<<endl;
								total_harga = belanja - (belanja * 0.25) - (belanja * 0.1);
								break;
							case 4:
								cout <<"Selamat anda mendapatkan diskon 10%+10%"<<endl;
								total_harga = belanja - (belanja * 0.1) - (belanja * 0.1);
								break;
							}
					}
			}
			else
			{
				cout << "Karena tidak membawa KTP anda gagal mendapatkan diskon"<<endl;
				total_harga = belanja;
			}	
	}
	else 
	{
		cout << "Jumlah pembelian anda kurang, maaf anda tidak mendapatkan diskon :("<<endl;
		total_harga = belanja;
	}
	cout <<"Total harga yang dibayar adalah : "<< total_harga <<endl;
	cout <<"------------------------------------------------";
	cout <<endl<<"Terimakasih Telah Berbelanja di Toko Kami\nSelamat Hari Kesaktian Pancasila";
	return 0;
}
