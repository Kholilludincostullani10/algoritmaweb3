#include<iostream>
#include <string>

using namespace std;

string var_global ="VARIABEL GLOBAL";

void hitungluas(){
	cout<<var_global<<endl;
}

int main()
{
	string var_lokal = "VARIABEL LOKAL";
	cout<<var_global<<endl;
	hitungluas();
	cout<<endl;
	cout<<var_lokal<<endl;
	cin.get();
	return 0;
}
