#include<iostream>
using namespace std;
int ChuSoLonNhat(int);
void DemSoLonNhat(int,int);
int main()
{
	int n;
	cin >> n;
	int lc = ChuSoLonNhat(n);
	DemSoLonNhat(n, lc);
	return 0;
}
int ChuSoLonNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
void DemSoLonNhat(int nn, int lc)
{
	int t = nn;
	int dem = 0;
	while (t != 0)
	{

		int dv = t % 10;
		if (dv == lc)
			dem++;
		t = t / 10;
	}
	cout << dem;
}