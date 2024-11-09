#include<iostream>
#include<iomanip>
using namespace std;
    int main(){
    double hargabuah,total;
    int kualitas,jumlah;
    char ulang;
        do{

    cout<<"\t\tProgram Cetak Harga Kualitas Durian Berdasarkan Harga"<<endl;
    cout<<"\t======================================================="<<endl;
//isikan harga pertamax dan n!
    cout<<"Masukkan kualitas buah Durian (1/2/3) : ";
    cin>>kualitas;

//tentukan harga buah berdasar kualitas
    switch(kualitas){
    case 1:
        hargabuah=15000;
    case 2:
        hargabuah=10000;
    case 3:
        hargabuah=8000;
    break;
    default:
        cout<<"Kualitas Buah Tidak Valid!"<<endl;
        return 0;
    }


//input jumlah pembelian
    cout<<"Jumlah Pembelian Durian : ";
    cin>>jumlah;

//hitung total
    total=hargabuah*jumlah;

//diskon lebih dari 3
    if(jumlah>3){
        total*=0.9;
        cout<<"Anda Mendapatkan Diskon 10%!"<<endl;

    }

//tampilkan output
        cout<<fixed<<setprecision(0);
        cout<<"Harga per buah : Rp"<<hargabuah<<endl;
        cout<<"Jumlah Pembelian : "<<jumlah<<endl;
        cout<<"Total Harga : "<<total<<endl;

    cout<<"\t==================================================="<<endl;

//tanya program apakah ingin diulang?
cout<<"Apakah ingin menggunakan Program Kembali ? (y/n)";
cin>>ulang;
        } while(ulang=='y'||ulang=='Y');
    return 0;
    }
