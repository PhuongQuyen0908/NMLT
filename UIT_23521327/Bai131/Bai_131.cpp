#include<iostream>
#include<cmath>
using namespace std;
void Nhapdiem(float&, float&);
float Tinhdodai(float, float, float,float);
void KiemTra(float, float, float);
int main()
{
	cout << "Nhap hoanh do va tung do diem\n";
	float xA,yA,xB,yB,xC,yC;
	Nhapdiem(xA,yA);
	Nhapdiem(xB, yB);
	Nhapdiem(xC, yC);
	float a, b, c;
	a = Tinhdodai(xA, yA, xB, yB);
	b = Tinhdodai(xA, yA, xC, yC);
	c = Tinhdodai(xB, yB, xC, yC);
	KiemTra(a, b, c);
	return 0;
}
void Nhapdiem(float& hd, float& td)
{
	cin >> hd >> td;
}
float Tinhdodai(float xx1, float yy1 ,float xx2,float yy2)
{
	float d= sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
	return d;
}
void KiemTra(float aa, float bb, float cc)
{
	if (aa + bb > cc && aa + cc > bb && bb + cc > aa)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
}
