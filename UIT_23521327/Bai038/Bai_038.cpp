#include <iostream>
#include <cmath>
using namespace std;
int Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = Tong(n);
	cout << "Vay tong S(n) la: " << S;
	return 0;
}
int Tong(int nn)
{
	int S = 0;
	int i = 1;
	while (i <= nn)
	{
		S = S + pow(i, 4);
		i++;
	}
	return S;
}