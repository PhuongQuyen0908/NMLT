#include <iostream>
#include <cmath>
void NhapToaDoDiem(float&, float&);
float KhoangCach(float, float, float, float);
float ChuVi(float, float, float);
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3;
	NhapToaDoDiem(x1, y1);
	NhapToaDoDiem(x2, y2);
	NhapToaDoDiem(x3, y3);
	float a, b, c;
	a = KhoangCach(x1, y1, x2, y2);
	b = KhoangCach(x2, y2, x3, y3);
	c= KhoangCach(x3, y3, x1, y1);
	float cv = ChuVi(a, b, c);
	cout << "Chu vi: "<< cv;
	return 0;
}
void NhapToaDoDiem(float&hd, float& td)
{
	cout << "Nhap hoanh do: ";
	cin >> hd;
	cout << "Nhap tung do: ";
	cin >> td;
	cout << "(" << hd << "," << td << ")\n";
}
float KhoangCach(float xx1, float yy1, float xx2, float yy2)
{
	float d = sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
	return d;
}
float ChuVi(float aa, float bb, float cc)
{
	float cv = aa + bb + cc;
	return cv;
}