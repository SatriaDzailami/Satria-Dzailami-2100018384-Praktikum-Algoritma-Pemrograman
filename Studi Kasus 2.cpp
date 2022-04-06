#include <iostream>
#include <conio.h>
using namespace std;

class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
public:
	Hitung();
	void hitung_total(){total=(x*ag)+(y*ab);}
private:
	int ag=17000, ab=21000, x, y, total;
};
Hitung::Hitung() {
	cout<<"\t\tInput Total Pembelian\n\n";
}
istream& operator>>(istream& in, Hitung& masukan) {
	cout<<"Ayam Goreng yang dibeli\t: "; in>>masukan.x;
	cout<<"Ayam Bakar yang dibeli\t: "; in>>masukan.y;
	return in;
}
ostream& operator<<(ostream& out, const Hitung& keluaran) {
	out<<"\n\t\tStruk Pembayaran\n"<<endl;
	out<<"Harga Ayam Goreng\t: "<<keluaran.ag<<endl;
	out<<"Harga Ayam Bakar\t: "<<keluaran.ab<<endl;
	out<<"Ayam Goreng yang dibeli\t: "<<keluaran.x<<endl;
	out<<"Ayam Bakar yang dibeli\t: "<<keluaran.y<<endl;
	out<<"Harga total\t\t: "<<keluaran.total<<endl;
	if(keluaran.total>=45000){
		cout<<"Potongan harga\t\t: "<<keluaran.total/10<<endl;
		cout<<"Total pembayaran\t: "<<keluaran.total-(keluaran.total/10)<<endl;
	}
	else{
		cout<<"Potongan harga\t\t: 0\n";
		cout<<"Total pembayaran\t: "<<keluaran.total<<endl;
	}
	return out;
}
main(){
	Hitung X;
	cin>>X;
	X.hitung_total();
	cout<<X;
	getch();
	return 0;
}
