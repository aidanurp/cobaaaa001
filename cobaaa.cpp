#include <iostream>

using namespace std;

int main(){
	int lbr,gt,pjk,gk;
	int gpkk,jk;
	int panjang, lebar, luas ,pilihan, alas, tinggi;
	int x;
	int w,X,y;
	double Tinggi, berat;
	char yt;
	atas:
	
	cout <<"1.Perhitungan berat badan\n";
	cout <<"2.Perhitungan absolute\n";
	cout <<"3.Persegi panjang\n";
	cout <<"4.Perhitungan Gaji Karyawan\n";
	cout <<"5.Penentuan Nilai\n";
	cout <<"Masukan Pilihan =";cin >>pilihan;
	
	switch(pilihan){
		case 1:
		cout <<"Perhitungan berat badan\n";
		cout <<"Masukkan berat badan : ";cin >>berat;
		cout <<"Masukkan tinggi badan : ";cin >>Tinggi;
	
		cout <<"Hasil \n";
		cout <<"Berat badan : "<<berat<<endl;
		cout <<"Tinggi badan : "<<Tinggi<<endl;
	
		if (berat<Tinggi/2.5){
		cout <<"Underweight";
		}else if (Tinggi/2.3<berat){
		cout <<"Overweight";
		}else if (Tinggi/2.5 <=berat <=Tinggi/2.3){
		cout <<"Normal!!";
		}
		cout<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		
		case 2:
		cout <<"Perhitungan Selisih Nilai Absolute"<<endl;
		cout <<"Masukkan Nilai X	: ";cin>>X;
		cout <<"Masukkan Nilai Y	: ";cin>>y;
	
		if (X>y){
		w=X-y;
		}else if (y>X){
		w=y-X;
		}
		cout <<"Hasil : "<<w;
		cout<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		
		case 3:
		cout<<"masukan panjang =";cin>>panjang;
		cout<<"masukan lebar =";cin>>lebar;
		luas =panjang * lebar;
		cout<<"luas persegi panjang="<<luas<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		
		case 4:
		cout <<"Perhitungan Gaji Karyawan "<<endl;
		cout <<"Masukkan Gaji Pokok : Rp. ";cin >>gpkk;
		cout <<"Masukkan Jam Kerja : ";cin >>jk;
		lbr=jk-40;
		gt=(lbr*1.5+40)*gpkk;
		pjk=gt*0.15;
		gk=gt-pjk;
	
		cout <<"Hasil Perhitungan Gaji"<<endl;
		cout <<"Gaji Pokok	: Rp. "<<gpkk<<endl;
		cout <<"Jam Kerja 	: "<<jk<<endl;
		cout <<"Jam Lembur	: "<<lbr<<endl;
		cout <<"Gaji sebelum dipotong pajak : Rp. "<<gt<<endl;
		cout <<"Total Gaji 	: Rp. "<<gk;
		cout<<"\n";
		cout<<"Kembali..?? [Y/T]";cin>>yt;
		if(yt=='Y'||yt=='y')
		goto atas;
		else if(yt=='T'||yt=='t')
		cout<<"\n";
		cout<<"Terima Kasih"<<endl;
		break;
		
		
	}
}
