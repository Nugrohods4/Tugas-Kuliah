#include <iostream>

using namespace std;

int main(){
    int tugas, uts, uas;

    char nama[100];
    char nim[20];
    char kelas[20];

    cout <<"Masukan Nama : ";
    cin.getline(nama,100);

    cout<<"Masukan NIM : ";
    cin.getline(nim,20);

    cout<<"Masukan Kelas : ";
    cin.getline(kelas,20);

    cout <<"Masukan nilai tugas : ";
    cin >>tugas;
    cout <<"Masukan nilai uts : ";
    cin >>uts;
    cout <<"Masukan nilai uas : ";
    cin >>uas;
    
    int nilai_akhir = (tugas*0.2) + (uts*0.4) + (uas*0.4);


    char grade;

    if(nilai_akhir >=90){
        grade = 'A';
    }else if(nilai_akhir >=80)
    {
        grade = 'B';
    }else if (nilai_akhir >= 70)
    {
        grade = 'C';
    }
    else{
        grade = 'D';
    }

    cout<<"Nama : "<<nama<<endl;
    cout<<"NIM  : "<<nim<<endl;
    cout<<"Kelas: "<<kelas<<endl;

    cout<<"Grade: "<<grade<<endl;

    
}