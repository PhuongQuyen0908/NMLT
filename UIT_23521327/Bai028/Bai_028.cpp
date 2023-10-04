#include<iostream>
using namespace std;
int Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = Tong(n);
	cout << S;
	return 0;
}
int Tong(int nn)
{
	int S = 0;
	int i = 1;
	while (i <= nn)
	{
		S = S + i * i;
		i = i + 1;
	}
	return S;
}
