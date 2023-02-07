#include <iostream>
using namespace std;

int main(){

    int angka;
    cout<<"===R E M I D I  D A N S==="<<endl;
    cout<<"Masukkan Angka : ";
    cin>>angka;
    if(angka > 0){
        cout<<"Anda Memasukkan Bilangan Positif";
    }else if(angka == 0){
        cout<<"Anda Memasukkan Angka 0";
    } else{
        cout<<"Anda Memasukkan Bilangan Negatif";
    }
    return 0;
}
