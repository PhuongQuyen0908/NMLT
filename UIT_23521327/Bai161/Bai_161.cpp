#include<iostream>
using namespace std;
int KiemTra(int);
void XuatKetQua(int);
int main()
{
	int n;
	cin >> n;
	int flag = KiemTra(n);
	XuatKetQua(flag);
	return 0;
}
int KiemTra(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	return flag;
}
void XuatKetQua(int flag)
{
	if (flag == 1)
		cout << "Tang";
	else cout << "Ko tang";
}