#include<iostream>
using namespace std;
void KiemTra(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap do dai ba canh x,y,z:\n";
	cin >> x >> y >> z;
	KiemTra(x, y, z);
	return 0;
}
void KiemTra(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && zz + xx > yy)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";
}