//StreamReaderandWriter_4NIMBelakang

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    //membuat objek output file
    ofstream outfile;
    //membuka file untuk ditulisi
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

   