#include <iostream>

using namespace std;

int main(){
    int tugas=80, uts=95, uas=90;
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

    cout<<"Nama : Nugroho Dwi Susanto"<<endl;
    cout<<"NIM  : 191011400449"<<endl;
    cout<<"Kelas: 07TPLP004"<<endl;

    cout<<"Grade: "<<grade<<endl;

    
}