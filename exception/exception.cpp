#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awal Program " << endl; //penanda 1:...
    try {
        array< int, 3> data = { 1, 2, 3 };
        //pesan array interger 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karn array data hanya
        memiliki 3 elemen*/
    }
    cout << "baris program yang terakhir " << endl;
}

