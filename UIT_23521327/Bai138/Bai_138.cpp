#include<iostream>
using namespace std;
void TinhHamSo(float);
int main()
{
	float x;
	cin >> x;
	TinhHamSo(x);
	return 0;
}
void TinhHamSo(float xx)
{
	float f;
	if (xx >= 0)
	{
		if (xx <= 1)
			f = 5 * xx - 7;
		else f = 2 * xx * xx * xx + 5 * xx * xx - 8 * xx + 3;
	}
	else f = -2 * xx * xx * xx + 6 * xx + 9;
	cout << f;
}