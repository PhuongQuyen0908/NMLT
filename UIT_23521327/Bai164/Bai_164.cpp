#include<iostream>
using namespace std;
float Phanso(int);
void XuatKetQua(float);
int main()
{
	int n;
	cin >> n;
	float S = Phanso(n);
	XuatKetQua(S);
	return 0;
}
float Phanso(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = 1 / (1 + s);
		i++;
	}
	return s;
}
void XuatKetQua(float ss)
{
	float S = ss;
	cout << S;
}