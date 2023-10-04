#include<iostream>
using namespace std;
float mu(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x11 = mu(x);
	cout << "x11= " << x11;
	return 0;
}
float mu(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x8 * x2;
	float x11 = x10 * xx;
	return x11;
}