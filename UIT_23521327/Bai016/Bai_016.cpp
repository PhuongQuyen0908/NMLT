#include<iostream>
using namespace std;
float mu(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x9 = mu(x);
	cout << "x9= " << x9;
	return 0;
}
float mu(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * xx;
	return x9;
}