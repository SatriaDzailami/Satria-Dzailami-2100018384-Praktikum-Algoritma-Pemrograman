#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
	struct str {
		string s;
	};
	int x;
	int i=1,j=1;
	int a[i],b[i];
	str c[100];
	int uang, total=0, kembali, harga;
	cout<<"Selemat Datang E-minimarket"<<endl<<endl;
	cout<<"Apakah Anda Ingin Membeli?(1/0) "; cin>>x;
	
	while(true){
		if(x==0){
			break;
		}else{
			cout<<"Nama Barang\t\t: "; cin>>c[i].s;
			cout<<"Harga Barang\t\t: ";cin>>a[i];
			cout<<"Jumlah Barang\t\t: ";cin>>b[i];
			harga=a[i]*b[i];
			total+=harga;
			cout<<"Apakah Ada Barang Lain?(1/0)"; cin>>x;
			i++;
		}
	}
	
	cout<<"\n\t\tStruk"<<endl;
	for (j;j<i;j++){
		cout<<j<<"."<<endl;
		cout<<"Nama Barang\t\t: "<<c[j].s<<endl;
		cout<<"Harga Barang\t\t: "<<a[j]<<endl;
		cout<<"Jumlah Barang\t\t: "<<b[j]<<endl<<endl;
	}
	
	cout<<"Total Harga\t\t: "<<total<<endl;
	cout<<"Nominal Uang\t\t: "; cin>>uang;
	kembali = uang-total;
	if(kembali >= 0){
		cout<<"Kembalian\t\t: "<<kembali;
	} else {
		cout<<"Tidak cukup"<<endl;
	}
}
