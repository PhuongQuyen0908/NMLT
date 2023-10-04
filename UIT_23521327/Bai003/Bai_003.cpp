#define _USE_MATH_DEFINES
#include<iostream>
using namespace std;
float ChuVi(float);
int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	float Chuvi = ChuVi(r);
	cout << Chuvi;
	return 0;
}
float ChuVi(float rr)
{
	float cv;
	cv= 2 * rr * (M_PI);
	return cv;
}