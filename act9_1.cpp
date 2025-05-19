#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        static int totalMahasiswa;
    public:
        string nama;
        string status;
        int usia;

        Mahasiswa (string pNama, int pUsia)
        {
            nama = pNama;
            usia = pUsia;
            status = "Mahasiswa Baru";
            ++totalMahasiswa;
            cout << nama << "dibuat"<< "ststus" <<endl;
            cout <<endl;
        }


        ~Mahasiswa()
        {
            cout << nama << "Dihancurkan" << endl;
            --totalMahasiswa;
            cout << endl;
        }

        static int gettotalMahasiswa(){
            return totalMahasiswa;
        }

        static void settotalMahasiswa(int a){
            totalMahasiswa =a;
        }
    };

int Mahasiswa::totalMahasiswa =0;

int main()
{

    cout << "total Mahasiswa adalah" << 
    Mahasiswa::gettotalMahasiswa() << endl;
    
        Mahasiswa mhs1("maman",20);
        Mahasiswa mhs2("indra",29);
          Mahasiswa::settotalMahasiswa(10);
    cout << "total Mahasiswa adalah" << 
    Mahasiswa::gettotalMahasiswa() << endl;

  
    
    {
         Mahasiswa mhs3("agus",27);
         Mahasiswa mhs4("steven",24);

     cout << "total Mahasiswa adalah" << 
    Mahasiswa::gettotalMahasiswa() << endl;
    
    }
    cout << "total Mahasiswa adalah" << 
    Mahasiswa::gettotalMahasiswa() << endl;
    return 0;
}