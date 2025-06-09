#include <iostream>
using namespace std;

int main() {
   try{
        cout << "Selamat datang di Prodi TI UMY" << endl;
        throw 3; //melemparkan sebuah integer maka:
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a) {
        //blok ini akan dieksekusi
        cout << a << "Pengecualian akan dieksekusi" << endl;
    }
    catch(...) {
        //jika selain integer maka blok ini akan dieksekusi:
        cout << "default Pnegecualian dieksekusi" << endl;
    }
    return 0;
} 