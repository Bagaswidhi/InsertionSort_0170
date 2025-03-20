#include <iostream>
using namespace std;;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat variabel inputan n

void input ()
{// prosedur input
    while (true)
    {
        cout << " Masukkan Jumlah data pada Array : "; // membuat inputan jumlah element array
        cin >> n; // meamnggil variable inputan n

        if (n <= 20)
        {//Membuat kondisi n tidak lebih dari 20
        break;
        }
        else
        {
            cout << "\n Array yang anda masukkan maksimal 20 elemen\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; // membuat jarak per baris program
    cout <<  "======================" << endl; // Membuat tampilan susunan data element array
    cout <<  "Masukkan element array" << endl; 
    cout <<  "======================" << endl; 

    for ( int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada arrya
    {
       cout << "Data ke- " << (i + 1) << " : "; // Memasukkan atau menginputkan nilai data n
       cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}
