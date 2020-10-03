#include <iostream>
using namespace std;
void rata(){
int a, b, n, i;

	cout<<"Jumlah Peserta Ujian = ";cin>>n;
	cout<<"Nilai Ujian Yang Ke-1 = ";cin>>a;
	cout<<"Nilai Ujian yang ke-2 = ";cin>>b;
	i = a+b; i =i/2;
	cout<<"Nilai Rata-Rata = "<<i<<endl;
	if (i > 50){
		cout<<"Nilai Rata-Rata Ujian Bagus"<<endl;
	}
	else{
	 cout<<"Nilai Rata-Rata Ujian Kurang Bagus"<<endl;
	}
}
int main ()
{
	rata();
	
	cin.get();
	return 0;
}
