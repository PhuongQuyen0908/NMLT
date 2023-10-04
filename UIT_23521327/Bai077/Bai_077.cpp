#include<iostream>
#include<cmath>
float TongSoMu(float, int);
using namespace std;
int main()
{
	float k;
	cout << "Nhap so mu k: ";
	cin >> k;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = TongSoMu(k, n);
	cout << s;
	return 0;
}
float TongSoMu(float kk, int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, kk);
		i++;
	}
	return s;
}