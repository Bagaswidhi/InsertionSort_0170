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

void insertionSort()
{// Prosedur insertionSort

    int temp; // membuat variable data temporer atau penyimpanan sementara
    int j, i; // membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++) 
    {//Step 1

        temp = arr[i]; // Step 2
        j = i - 1; // Step 3
        while (j >= 0 && arr[j] > temp) // Step 4
        {
            arr[j + 1] = arr[j]; // Step 4a
            j--; // Step 4b
        }
    arr [j + 1] = temp; // Step 5
    }
}

void display()
{
    cout << endl; // output baris kosong
    cout << "=================================" << endl; 
    cout << "Total Passs = " << n - 1 << endl; // count element movement
    cout << "=================================" << endl; // output ke layar
    cout << "Element Array yang telah tersusun" << endl; // output ke layar
    cout << "=================================" << endl; // output ke layar

    for (int j = 0; j < n; j++) 
    {//looping dengan j dimulai dari - hingga n-1
        cout << arr[j] << endl; // output ke layar     
    }
    cout << endl; // output baris kosong
}

int main()
{
    input(); // memanggil prosedur input
    insertionSort(); // memanggil prosedur insertionSort
    display(); // memanggil prosedur display
    system("pause"); // menahan tampilan layar
    return 0; 
}