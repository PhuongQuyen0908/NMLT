#include <iostream>
using namespace std;
int TichUocSo(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = TichUocSo(n);
	cout << "Vay tich uoc so cua n la: " << T;
	return 0;
}
int TichUocSo(int nn)
{
	int T = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn% i == 0)
			T = T * i;
		i++;
	}
	return T;
}