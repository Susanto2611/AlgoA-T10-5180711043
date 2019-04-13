#include <iostream>
#include <windows.h>
using namespace::std;

double inputan(string text)
{
double nilai;
cout<<" Masukan Nilai"<<text;cin>>nilai;
return nilai;
}

struct nillai
{
    double nil[3];
    string grade;
    string nama;
    char nim[10];

};struct nillai nila;

void prolog()
{
        cout<<"\n ====================================================="<<endl;
        cout<<"            UNIVERSITAS TEKNOLOGI YOGYAKARTA\n";
        cout<<"      MENGHITUNG NILAI AKHIR DAN GRADE MAHASISWA\n";
        cout<<"          MATA KULIAH: Algoritma dan Pemrograman 2";
        cout<<"\n =====================================================\n\n";
}

void epilog()
{
        cout<<"\n ====================================================="<<endl;
        cout<<"           DATA DIRI, NILAI DAN GRADE MAHASISWA \n";
        cout<<"               Algoritma dan Pemrograman 2";
        cout<<"\n =====================================================";
}
void gradee(double na)
{
      if (na>100)
        cout<<"\n ErrorA...";
    else if (na>=81)
        nila.grade="A";
    else if (na>=61)
        nila.grade="B";
    else if (na>=41)
        nila.grade="C";
    else if (na>=21)
        nila.grade="D";
    else nila.grade="E";

    cout<<"\n Grade Nilai\t: "<<nila.grade;
}

main()
{
cout<<"\n\n";


double nilaiakhir;
prolog();
cout<<" Masukan Nama\t: "; getline (cin,nila.nama);
cout<<" Masukan NIM\t: ";cin>>nila.nim;
nila.nil[0]=inputan (" UTS\t: ");
nila.nil[1]=inputan (" UAS\t: ");
nila.nil[2]=inputan (" Tugas\t: ");
nila.nil[3]=inputan (" Absen\t: ");
nilaiakhir=(nila.nil[0]*0.20)+(nila.nil[1]*0.30)+(nila.nil[2]*0.35)+(nila.nil[3]*0.15);

system ("CLS");

epilog();
cout<<"\n Nama Mahasiswa\t: "<<nila.nama;
cout<<"\n NIM Mahasiswa\t: "<<nila.nim;
cout<<"\n Nilai Akhir\t: "<<nilaiakhir;
gradee(nilaiakhir);
cout<<"\n =====================================================\n\n";
cout<<"\n\n\n";
return 0;
}

