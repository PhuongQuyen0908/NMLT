#include<iostream>
#include<cmath>
using namespace std;
float TinhTong();
int main()
{
	float S = TinhTong();
	cout << S;
	return 0;
}
float TinhTong()
{
	float s = 4 - (float)2 / 4 - (float)1 / 5 - (float)1 / 6;
	float t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * 16;
		e = (float)(4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6)) / t;
		s = s + e;
		i++;
	}
	return s;
}