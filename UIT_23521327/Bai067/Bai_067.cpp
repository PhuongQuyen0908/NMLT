#include <iostream>
using namespace std;
int KiemTraChuSoLe(int);
void XuatKetQua(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = KiemTraChuSoLe(n);
	XuatKetQua(flag);
}
int KiemTraChuSoLe(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}
void XuatKetQua(int ff)
{
	if (ff == 1)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";
}