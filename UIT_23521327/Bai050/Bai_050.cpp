#include <iostream>
using namespace std;
int TongUocSo(int);
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int S = TongUocSo(n);
	cout << "Vay tong tat ca cac uoc so cua so nguyen duong n la: " << S;
	return 0;
}
int TongUocSo(int nn)
{
	int S = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			S = S + i;
		i++;
	}
	return S;
}