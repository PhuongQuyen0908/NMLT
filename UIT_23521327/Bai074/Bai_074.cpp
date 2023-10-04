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
	cout << "Tong S(x,n)= " << s;
	return 0;
}
float Tong(float xx, float nn)
{
	float s = 0;
	int t = 1;
	float m = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + t / m;
		i++;
	}
	return s;
}