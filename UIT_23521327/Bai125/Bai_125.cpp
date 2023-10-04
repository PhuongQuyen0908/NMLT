#include<iostream>
using namespace std;
void Tinhsohang(float,float);
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	Tinhsohang(a, b);
	return 0;
}
void Tinhsohang(float aa,float bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
	cout <<"a="<< aa<<","<<"b=" << bb;
}