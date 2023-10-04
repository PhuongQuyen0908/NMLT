#include<iostream>
using namespace std;
int ChuSoBeNhat(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int lc = ChuSoBeNhat(n);
	cout << "Chu so be nhat la: " << lc;
	return 0;
}
int ChuSoBeNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}