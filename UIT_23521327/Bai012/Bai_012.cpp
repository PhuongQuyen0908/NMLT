#include<iostream>
using namespace std;
float mu(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x6 = mu(x);
	cout << "x6= " << x6;
	return 0;
}
float mu(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	return x6;
}