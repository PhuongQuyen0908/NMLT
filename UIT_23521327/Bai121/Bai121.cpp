#include<iostream>
using namespace std;
int Dayso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ahh = Dayso(n);
	cout <<"ahh= "<< ahh;
	return 0;
}
int Dayso(int nn)
{
	int ahh;
	int att = 1;
	int at = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}