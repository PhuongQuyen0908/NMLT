#include<iostream>
using namespace std;
float Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tong(n);
	cout << s;
	return 0;
}
float Tong(int nn)
{
	float s = 0;
	int m = 0;
	int i = 1;
	int dau = 1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)dau / m;
		i++;
		dau = -dau;
	}
	return s;
}