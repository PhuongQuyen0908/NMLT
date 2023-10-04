#include<iostream>
using namespace std;
void SoDoiXung(int);
int main()
{
	int n;
	cin >> n;
	SoDoiXung(n);
	return 0;
}
void SoDoiXung(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		cout << "La so doi xung";
	else cout << "Khong la so doi xung";
}