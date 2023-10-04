#include <iostream>
#include <cmath>
using namespace std;
float Khoangcach(float, float, float, float);
float ChuVi(float, float, float);
float Dientich(float, float, float, float);
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = Khoangcach(x1, y1, x2, y2);
	float b = Khoangcach(x2, y2, x3, y3);
	float c = Khoangcach(x1, y1, x3, y3);
	float p = ChuVi(a, b, c);
	float S = Dientich(p, a, b, c);
	cout << a << b << c << p;
	cout << "Dien tich: " << S;
	return 0;
}
float Khoangcach(float xx1, float yy1, float xx2, float yy2)
{
	float d=sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
	return d;
}
float ChuVi(float aa, float bb, float cc)
{
	float cv = (aa + bb + cc)/2;
	return cv;
}
float Dientich(float pp, float aa, float bb, float cc)
{
	float S = sqrt(pp * (pp - aa) * (pp - bb) * (pp - cc));
	return S;
}

