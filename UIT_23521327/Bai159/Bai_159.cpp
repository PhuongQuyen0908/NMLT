#include<iostream>
using namespace std;
int ChuSoNhoNhat(int);
void DemSoNhoNhat(int, int);
int main()
{
	int n;
	cin >> n;
	int lc = ChuSoNhoNhat(n);
	DemSoNhoNhat(n, lc);
	return 0;
}
int ChuSoNhoNhat(int nn)
{
	int lc = nn % 10;
	int dem = 0;
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
void DemSoNhoNhat(int nn, int lc)
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