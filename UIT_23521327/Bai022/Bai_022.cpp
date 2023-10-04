#include <iostream>
using namespace std;
int donvi(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dv = donvi(n);
	cout << "Chu so hang don vi la: " << dv;
	return 0;
}
int donvi(int nn)
{
	int dv = nn % 10;
	return dv;
}
