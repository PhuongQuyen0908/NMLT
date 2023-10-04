#include <iostream>
using namespace std;
int TongGiaThua(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = TongGiaThua(n);
	cout << "Tong Giai Thua: " << S;
	return 0;
}
int TongGiaThua(int nn)
{
	int S = 0;
	int i = 1;
	int t = 1;
	while (i <= nn)
	{
		t = t * i;
		S = S + t;
		i++;
	}
	return S;
}
