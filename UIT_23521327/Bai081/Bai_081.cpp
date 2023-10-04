#include<iostream>
using namespace std;
float TinhTong(float, float);
int main()
{
	float x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = TinhTong(x, n);
	cout << s;
	return 0;
}
float TinhTong(float xx, float nn)
{
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= nn)
	{
		m = m * (xx + i);
		s = s + 1 / m;
		i++;
	}
	return s;
}