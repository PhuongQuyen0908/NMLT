#include<iostream>
using namespace std;
int TongChuSo(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int S = TongChuSo(n);
	cout << "Tong chu so cua n: " << S;
	return 0;
}
int TongChuSo(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	return s;
}