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
	cout << "Tong S(n) =" << s;

	return 0;
}
float Tong(float xx, float nn)
{
	float s = 0;
	float t = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}