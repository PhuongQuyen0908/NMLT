#include<iostream>
using namespace std;
void DemChuSo(int);
int main()
{
	int n;
	cin >> n;
	DemChuSo(n);
	return 0;
}
void DemChuSo(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	cout << dem;
}