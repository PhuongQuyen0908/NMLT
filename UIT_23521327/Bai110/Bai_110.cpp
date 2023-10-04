#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float S = Tong();
	cout << S;
	return 0;
}
float Tong()
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}