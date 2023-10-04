#include<iostream>
using namespace std;
void ChuSoDauTien(int);
int main()
{
	int n;
	cin >> n;
	ChuSoDauTien(n);
	return 0;
}
void ChuSoDauTien(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
		dt = dt / 10;
	cout << dt;
}