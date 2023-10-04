#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
float ThetichV(float);
int main()
{
	float r;
	cin >> r;
	float Thetich= ThetichV(r);
	cout << Thetich;
	return 0;
}
float ThetichV(float rr)
{
	float V = (float)4 * (M_PI)*rr * rr * rr / 3;
	return V;
}