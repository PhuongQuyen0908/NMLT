#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
float KhoangCach(float, float, float, float);
int main()
{
	float x1, y1, x2, y2;
	Nhap(x1, y1);
	Nhap(x2, y2);
	float d = KhoangCach(x1, y1, x2, y2);
	cout << d;
	return 0;
}
void Nhap(float& hd , float& td)
{
	cout << "Nhap hoanh do: ";
	cin >> hd;
	cout << "Nhap tung do: ";
	cin >> td;
}
float KhoangCach(float xx1, float yy1, float xx2, float yy2)
{
	float d;
	d = sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
	return d;
}