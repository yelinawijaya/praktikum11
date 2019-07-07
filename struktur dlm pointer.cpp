#include<iostream.h>
#include<conio.h>
//Deklarasi Struktur
struct koordinat
{int x,y;};
void ubah_posisi(koordinat *posisi);//prototipe
void main()
{
koordinat posisi;//Definisi variabel struktur
posisi.x = 10;
posisi.y = 30;
cout<<"Isi semula : x = "<<posisi.x
<<"y = "<<posisi.y<<endl;
ubah_posisi(&posisi);//parameter berupa alamat
cout<<"Isi sekarang: x = "<<posisi.x
<<"y = "<<posisi.y<<endl;
}
//Definisi fungsi
void ubah_posisi(koordinat*posisi)
{
(*posisi).x=100;
(*posisi).y=300;
getch();
}
