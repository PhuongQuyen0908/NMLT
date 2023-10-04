#define _USE_MATH_DEFINES
#include<iostream>
using namespace std;
float Dientich(float);
int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float s = Dientich(r);
	cout << s;
	return 0;
}
float Dientich(float rr)
{
	float S;
	S= (M_PI)*rr * rr;
	return S;
}
