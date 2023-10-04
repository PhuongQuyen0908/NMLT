#include<iostream>
using namespace std;
void BDT(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap x,y,z\n";
	cin >> x >> y >> z;
	BDT(x, y, z);
}
void BDT(float xx, float yy, float zz)
{
	if (xx <= yy && yy <= zz)
		cout << "BDT dung";
	else
		cout << "BDT sai";
}