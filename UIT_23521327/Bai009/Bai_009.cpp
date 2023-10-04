#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
float Dientich(int, float);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float r;
	cout << "Nhap r: ";
	cin >> r;
	float S = Dientich(n, r);
	cout << S;
	return 0;

}
float Dientich(int nn, float rr)
{
	float S = (nn * rr * rr * sin(2 * (M_PI) / nn)) / 2;
	return S;
}