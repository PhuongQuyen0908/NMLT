#include<iostream>
using namespace std;
int SoDauTien(int);
void DemSoDauTien(int,int);
int main()
{
	int n;
	cin >> n;
	int dt = SoDauTien(n);
	DemSoDauTien(n, dt);
	return 0;
}
int SoDauTien(int nn)
{
	int dt = nn;
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
void DemSoDauTien(int nn,int dt)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}
	cout << dem;
}