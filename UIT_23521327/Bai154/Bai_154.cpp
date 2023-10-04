#include<iostream>
using namespace std;
void TimSoHang(int);
int main()
{
	int n;
	cin >> n;
	TimSoHang(n);
	return 0;
}
void TimSoHang(int nn)
{
	int ahh = nn;
	cout << ahh;
	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else ahh = 3 * ahh + 1;
	}
		cout << ahh;

}
