#include<iostream>
#include<cmath>
using namespace std;
void Nhaptoado(float&, float&);
float Tinhdientich(float, float, float, float, float, float);
void XuatKetQua(float,float);
int main()
{
	cout << "Nhap toa do cac diem:\n";
	float xA, yA, xB, yB, xC, yC, xM, yM;
	Nhaptoado(xA, yA);
	Nhaptoado(xB, yB);
	Nhaptoado(xC, yC);
	Nhaptoado(xM, yM);
	float SABC = Tinhdientich(xA, yA, xB, yB, xC, yC);
	float SMAB = Tinhdientich(xA, yA, xB, yB, xM, yM);
	float SMBC = Tinhdientich(xM, yM, xB, yB, xC, yC);
	float SMAC = Tinhdientich(xA, yA, xC, yC, xM, yM);
	float S = SMAB + SMBC + SMAC;
	XuatKetQua(S, SABC);
	return 0;
}
void Nhaptoado(float& hd, float& td)
{
	cin >> hd >> td;
}
float Tinhdientich(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3)
{
	float S;
	S= abs(xx1 * yy2 + xx2 * yy3 + xx3 * yy1 - 
		   xx2 * yy1 - xx3 * yy2 - xx1 * yy3) / 2;
	return S;
}
void XuatKetQua(float S,float SABC)
{
	if (S = SABC)
		cout << "M trong";
	else
		cout << "M ngoai";
}