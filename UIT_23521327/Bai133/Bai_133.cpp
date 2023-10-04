#include <iostream>
using namespace std;
void KiemTraTamGiac(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap do dai ba canh\n";
	cin >> x >> y >> z;
	KiemTraTamGiac(x, y, z);
	return 0;
}
void KiemTraTamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && zz + xx > yy)
		if (xx == yy && yy == zz)
			cout << "Deu";
		else
			if ((xx * xx == yy * yy + zz * zz) || (yy * yy == xx * xx + zz * zz) || (zz * zz == xx * xx + yy * yy))
				if (xx == yy || yy == zz || zz == xx)
					cout << "Vuong can";
				else cout << "Vuong";
			else
				if (xx == yy || yy == zz || zz == xx)
					cout << "Can";
				else cout << "Thuong";
	else cout << "Khong phai la tam giac";
}