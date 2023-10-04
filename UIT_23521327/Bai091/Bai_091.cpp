#include<iostream>
using namespace std;
float Tong(float, float);
int main()
{
	float x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tong(x, n);
	cout <<"Tong S(n) = "<<s;
	return 0;
}
float Tong(float xx, float nn)
{
	float s = -1;
	float t = 1;
	int m = 1;
	int i = 2;
	int dau = 1;
	while (i <= nn)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}