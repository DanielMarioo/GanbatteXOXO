/* KELOMPOK PYTHON
  1. Fikri Abdurrahman A.
  2. Adven Bintang Putra P.
  3. Mario Dwi Satria N.
  4. Putri Aryaningsih
  5. Norinta Selsa H.P
*/


#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

main(){


	int pil, jumlahbeli, besardiskon, jumlahharga, jumlahbayar, kembalian;

   cout<<"                Toko Elektronik Python"<<endl;
   cout<<" =================================================="<<endl;
   cout<<" | Kode |      Nama        |   Harga   |  Diskon  |"<<endl;
	cout<<" =================================================="<<endl;
   cout<<" |  1   | TV 14'' Digitec  | 1.500.000 | 5%       |"<<endl;
   cout<<" |  2   | Kulkas Panasonic | 2.500.000 | 10%      |"<<endl;
   cout<<" |  3   | VCD Player Soy   | 1.250.000 | 5%       |"<<endl;
   cout<<" |  4   | Blender Toshiba  | 750.000   | 0%       |"<<endl;
   cout<<" |  5   | Mixer Toshiba    | 750.000   | 0%       |"<<endl;
	cout<<" =================================================="<<endl;

   cout<<" Masukkan Kode Barang : ";
   cin>>pil;
   system("cls");

   if  (pil==1)
   {
		cout<<"              Toko Elektronik Python"<<endl;
   	cout<<" ==========================================="<<endl;
   	cout<<" |      Nama        |   Harga   |  Diskon  |"<<endl;
		cout<<" ==========================================="<<endl;
      cout<<" | TV 14'' Digitec  | 1.500.000 | 5%       |"<<endl;
      cout<<" ==========================================="<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah beli barang = ";
      cin>>jumlahbeli;
      cout<<endl;
      besardiskon = (1500000 * jumlahbeli) * 0.05;
      cout<<" Besar Diskon untuk TV 14'' Digitec = Rp. "<<besardiskon<<endl;
      jumlahharga = (1500000 * jumlahbeli) - besardiskon;
      cout<<" Harga untuk TV 14'' Digitec = Rp. "<<jumlahharga<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah bayar = Rp. ";
      cin>>jumlahbayar;
      kembalian = jumlahbayar - jumlahharga;
      cout<<" Kembalian = Rp. "<<kembalian<<endl;
   }
   else if (pil==2)
   {
   	cout<<"              Toko Elektronik Python"<<endl;
   	cout<<" ==========================================="<<endl;
   	cout<<" |      Nama        |   Harga   |  Diskon  |"<<endl;
		cout<<" ==========================================="<<endl;
      cout<<" | Kulkas Panasonic | 2.500.000 | 10%      |"<<endl;
      cout<<" ==========================================="<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah beli barang = ";
      cin>>jumlahbeli;
      cout<<endl;
      besardiskon = (2500000 * jumlahbeli) * 0.1;
      cout<<" Besar Diskon untuk Kulkas Panasonic = Rp. "<<besardiskon<<endl;
      jumlahharga = (2500000 * jumlahbeli) - besardiskon;
      cout<<" Harga untuk Kulkas Panasonic = Rp. "<<jumlahharga<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah bayar = Rp. ";
      cin>>jumlahbayar;
      kembalian = jumlahbayar - jumlahharga;
      cout<<" Kembalian = Rp. "<<kembalian<<endl;
   }
   else if (pil==3)
   {
   	cout<<"              Toko Elektronik Python"<<endl;
   	cout<<" ==========================================="<<endl;
   	cout<<" |      Nama        |   Harga   |  Diskon  |"<<endl;
		cout<<" ==========================================="<<endl;
      cout<<" | VCD Player Soy   | 1.250.000 | 5%       |"<<endl;
      cout<<" ==========================================="<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah beli barang = ";
      cin>>jumlahbeli;
      cout<<endl;
      besardiskon = (1250000 * jumlahbeli) * 0.05;
      cout<<" Besar Diskon untuk VCD Player Soy = Rp. "<<besardiskon<<endl;
      jumlahharga = (1250000 * jumlahbeli) - besardiskon;
      cout<<" Harga untuk VCD Player Soy = Rp. "<<jumlahharga<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah bayar = Rp. ";
      cin>>jumlahbayar;
      kembalian = jumlahbayar - jumlahharga;
      cout<<" Kembalian = Rp. "<<kembalian<<endl;
   }
	else if (pil==4)
   {
   	cout<<"              Toko Elektronik Python"<<endl;
   	cout<<" ==========================================="<<endl;
   	cout<<" |      Nama        |   Harga   |  Diskon  |"<<endl;
		cout<<" ==========================================="<<endl;
      cout<<" | Blender Toshiba  | 750.000   | 0%       |"<<endl;
      cout<<" ==========================================="<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah beli barang = ";
      cin>>jumlahbeli;
      cout<<endl;
      besardiskon = (750000 * jumlahbeli) * 0;
      cout<<" Besar Diskon untuk Blender Toshiba = Rp. "<<besardiskon<<endl;
      jumlahharga = (750000 * jumlahbeli) - besardiskon;
      cout<<" Harga untuk Blender Toshiba = Rp. "<<jumlahharga<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah bayar = Rp. ";
      cin>>jumlahbayar;
      kembalian = jumlahbayar - jumlahharga;
      cout<<" Kembalian = Rp. "<<kembalian<<endl;
   }
 	else
   {
  		cout<<"              Toko Elektronik Python"<<endl;
   	cout<<" ==========================================="<<endl;
   	cout<<" |      Nama        |   Harga   |  Diskon  |"<<endl;
		cout<<" ==========================================="<<endl;
      cout<<" | Mixer Toshiba    | 750.000   | 0%       |"<<endl;
      cout<<" ==========================================="<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah beli barang = ";
      cin>>jumlahbeli;
      cout<<endl;
      besardiskon = (750000 * jumlahbeli) * 0;
      cout<<" Besar Diskon untuk Mixer Toshiba = Rp. "<<besardiskon<<endl;
      jumlahharga = (750000 * jumlahbeli) - besardiskon;
      cout<<" Harga untuk Mixer Toshiba = Rp. "<<jumlahharga<<endl;
      cout<<endl;
      cout<<" Masukkan jumlah bayar = Rp. ";
      cin>>jumlahbayar;
      kembalian = jumlahbayar - jumlahharga;
      cout<<" Kembalian = Rp. "<<kembalian<<endl;
   }
   getch();
}