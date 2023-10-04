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
	cout << s;
	return 0;
}
float Tong(float xx, float nn)
{
	float s = 1 + xx;
	float t = xx;
	int m = 1;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}