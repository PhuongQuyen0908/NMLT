#include <iostream>
using namespace std;
int hangchuc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int hc = hangchuc(n);
	cout << "Chu so hang chuc la: " << hc;
	return 0;
}
int hangchuc(int nn)
{
	int hc = (nn % 100) / 10;
	return hc;
}