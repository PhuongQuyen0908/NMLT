#include<iostream>
using namespace std;
float mu(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x15 = mu(x);
	cout << "x15= " << x15;
	return 0;
}
float mu(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x15 = x16 / xx;
	return x15;
}
