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
	cout <<"Tong S(x,n)= "<< s;
	return 0;
}
float Tong(float xx, float nn)
{
	float s = xx;
	float t = xx;
	int i = 3;
	int dau = -1;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
