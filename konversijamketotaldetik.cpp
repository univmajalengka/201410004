#include<iostream>
using namespace std;
int main()
{
	int j,m,d,td;
	cout<<"Masukan jam : ";
	cin>>j;
	cout<<"Masukan menit : ";
	cin>>m;
	cout<<"Masukan detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detik : "<<td;
	return 0;
}
