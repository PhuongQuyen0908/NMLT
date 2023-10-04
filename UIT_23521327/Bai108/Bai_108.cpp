#include<iostream>
#include<cmath>
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
float Tong(float xx)
{
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = t / m;
		s = s + e;
		i++;
	}
	return s;
}