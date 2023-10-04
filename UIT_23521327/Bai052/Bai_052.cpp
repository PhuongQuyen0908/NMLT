#include<iostream>
using namespace std;
int DemUocSo(int);
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int dem = DemUocSo(n);
	cout << "So luong uoc so cua so nguyen duong n: " << dem;
	return 0;
}
int DemUocSo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i++;
	}
	return dem;
}