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
	cout << "Tong S(x,n)= " <<s;
	return 0;
}
float Tong(float xx, float nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	int dau = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + dau * t;
		i++;
		dau = -dau;
	}
	return s;
}