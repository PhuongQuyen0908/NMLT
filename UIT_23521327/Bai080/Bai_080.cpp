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
	float s = 1;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + (i + 1) * t;
		i++;
	}
	return s;
}