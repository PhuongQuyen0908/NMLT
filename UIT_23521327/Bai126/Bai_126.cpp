#include<iostream>
using namespace std;
float GTLN(float, float);
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	float lc = GTLN(a, b);
	cout << "GTLN= " << lc;
	return 0;
}
float GTLN(float aa, float bb)
{
	float lc = aa;
	if (lc < bb)
		lc = bb;
	return lc;
}