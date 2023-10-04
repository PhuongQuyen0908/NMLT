#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Chuvi(int, float);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float Chuvidagiac = Chuvi(n, r);
	cout << Chuvidagiac;
	return 0;
}
float Chuvi(int nn, float rr)
{
	float P = 2 * nn * rr * sin(M_PI / nn);
	return P;
}