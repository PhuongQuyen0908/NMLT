#include<iostream>
using namespace std;
void TinhHamSo(float);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	TinhHamSo(x);
	return 0;
}
void TinhHamSo(float xx)
{
	float f;
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else f = -2 * xx * xx + 4 * xx - 9;
	cout << f;
}