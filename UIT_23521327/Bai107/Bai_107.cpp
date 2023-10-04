#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
float Tong(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float S = Tong(x);
	cout << S;
	return 0;
}
float Tong(float aa)
{
	float xx = (aa * M_PI) / 180;
	float S = 1;
	float t = 1;
	float m = 1;
	float e = 1;
	int dau = -1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		e = t / m;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return S;
}