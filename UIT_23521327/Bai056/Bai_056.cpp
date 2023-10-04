#include<iostream>
using namespace std;
int DemUocSoChan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = DemUocSoChan(n);
	cout << "So uoc so chan la: " << dem;
	return 0;
}
int DemUocSoChan(int nn)
{
	int dem = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn% i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}