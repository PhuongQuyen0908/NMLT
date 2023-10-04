#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
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
	float S = xx;
	float t = xx;
	float m = 1;
	float e = xx;
	int dau = -1;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		S = S + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return S;
}