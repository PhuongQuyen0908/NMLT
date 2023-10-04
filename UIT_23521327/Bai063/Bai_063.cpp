#include<iostream>
using namespace std;
int TichChuSoLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tich = TichChuSoLe(n);
	cout << "Tich chu so le: " << tich;
	return 0;
}
int TichChuSoLe(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	return tich;
}