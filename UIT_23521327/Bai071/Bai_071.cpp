#include<iostream>
using namespace std;
float Tong(float,float);
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
	float s = xx;
	float t = xx;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}