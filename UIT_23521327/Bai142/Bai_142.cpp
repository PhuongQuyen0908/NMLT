#include<iostream>
using namespace std;
void SoDaoNguoc(int);
int main()
{
	int n;
	cin >> n;
	SoDaoNguoc(n);
	return 0;
}
void SoDaoNguoc(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << dn;
}