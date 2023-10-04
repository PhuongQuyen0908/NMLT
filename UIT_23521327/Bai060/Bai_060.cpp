#include<iostream>
using namespace std;
int Tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tich = Tich(n);
	cout << "Tich cac chu so cua n: " << tich;
	return 0;
}
int Tich(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}