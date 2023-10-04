#include <iostream>
using namespace std;
int TongUocSoChan(int);
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int S = TongUocSoChan(n);
	cout << "Tong tat ca cac uoc so chan cua n la: " << S;
	return 0;
}
int TongUocSoChan(int nn)
{
	int S = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			S = S + i;
		i = i + 2;
	}
	return S;
}