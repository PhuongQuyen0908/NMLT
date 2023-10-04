#include <iostream>
using namespace std;
float Tong(float, int);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tong(x, n);
	cout << "Tong S(x,n) " << S;
	return 0;
}
float Tong(float xx, int nn)
{
	float S = 1 - xx;
	float t = xx;
	float m = 1;
	int i = 3;
	int dau = 1;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		S = S + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return S;
}