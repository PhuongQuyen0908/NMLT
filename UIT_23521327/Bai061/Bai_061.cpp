#include<iostream>
using namespace std;
int Dem(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = Dem(n);
	cout << "So chu so le: " << dem;
	return 0;
}
int Dem(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	return dem;
}
