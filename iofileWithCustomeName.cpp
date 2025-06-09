//StreamReaderandWriter_4NIMBelakang

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
//void readerandwriterfile(string format)

int main() {
    string baris;
    string nameFile;

    cout << "Masukkan name file : ";
    cin >> nameFile;
    cin.ignore();

    //membuat objek output file
    ofstream outfile;
    //membuka file untuk ditulisi
    outfile.open(nameFile + ".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

     //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jjika anda memasukkan karakter q
        if (baris== "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;

    }
    //selesai dalam menulis, sekarang tutup filenya
    outfile.close();

    //membuat objek input file stream
    ifstream infile;
    //membuka file yang dituliskan
    infile.open(nameFile + ".txt");

    cout << ">= Membuka dan membaca file" << endl;
    //jika file tidak ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah seisi
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "unable to open file";
    return 0;

};